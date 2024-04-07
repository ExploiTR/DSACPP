#include "../header.h"

void merge2(int arr[], int low, int mid, int high)
{
    int *temp = new int[high - low + 1]();

    int left = low;
    int right = mid + 1;
    int cur_wp = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
            temp[cur_wp++] = arr[left++];
        else
            temp[cur_wp++] = arr[right++];
    }

    while (left <= mid)
        temp[cur_wp++] = arr[left++];

    while (right <= high)
        temp[cur_wp++] = arr[right++];

    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];

    delete temp;
}

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

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
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    dprint(arr, 6);
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