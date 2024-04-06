#include "../header.h"

void merge(int arr[], int low, int mid, int high)
{
    // int *temp = new int[high - low + 1]();
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            // temp[left - low] = arr[left];
            temp.push_back(arr[left++]);
        }
        else
        {
            // temp[right - mid + 1] = arr[right];
            temp.push_back(arr[right++]);
        }
    }

    // for (int i = 0; i < high - low + 1; i++)
    // {
    //     arr[i + low] = temp[i];
    // }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];

    // delete temp;
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main()
{
    iosetup();

    int size;
    cin >> size;

    int *numArray = new int[size]();

    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        numArray[i] = temp;
    }

    merge_sort(numArray, 0, size - 1);

    dprint(numArray, size);

    return 0;
}