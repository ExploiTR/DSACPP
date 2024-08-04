#include "../header.h"

int largestElement(vector<int> &arr, int n)
{
    int cmax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > cmax)
            cmax = arr[i];
    }
    return cmax;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int cmax = a[0];
    int smax = -1;

    int cmin = a[0];
    int smin = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > cmax)
        {
            smax = cmax;
            cmax = a[i];
        }
        else if (a[i] > smax)
            smax = a[i];

        if (a[i] < cmin)
        {
            smin = cmin;
            cmin = a[i];
        }
        else if (a[i] != cmin && a[i] < smin)
            smin = a[i];
    }

    return {smax, smin};
}

int isSorted(int n, vector<int> a)
{
    int counter = INT_MIN;
    for (int i = 0; i < n; i++)
        if (a[i] > counter)
            counter = a[i];
        else
            return 0;
    return 1;
}

// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
bool check(vector<int> &nums)
{
    int fch = INT_MIN;
    int schi = -1;
    int sch = -1;

    for (int i = 0; i < nums.size(); i++)
        if (nums[i] >= fch)
        {
            fch = nums[i];
            if (i == nums.size() - 1)
                return true;
        }
        else
        {
            schi = i;
            break;
        }

    for (int i = schi; i < nums.size(); i++)
        if (nums[i] >= sch)
            sch = nums[i];
        else
            return false;

    if (nums[nums.size() - 1] <= nums[0])
        return true;
    else
        return false;
}

int removeDuplicates(vector<int> &nums)
{
    int fp = 0;

    for (int ip = 1; ip < nums.size(); ip++)
        if (nums[fp] != nums[ip])
            nums[++fp] = nums[ip];

    return fp + 1;
}

// codestudio-easy
vector<int> rotateArray(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
    return arr;
}

// https://leetcode.com/problems/rotate-array/
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    iosetup();

    int size;
    cin >> size;

    // int *numArray = new int[size]();
    vector<int> numArray;

    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        // numArray[i] = temp;
        numArray.push_back(temp);
    }

    // dprint(numArray, size);
    // dprint(getSecondOrderElements(size, numArray));
    // cout << removeDuplicates(numArray);

    dprint(rotateArray(numArray, 6));
    rotate(numArray, 3);
    dprint(numArray);

    return 0;
}