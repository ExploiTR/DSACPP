#include "../header.h"

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;

    int fp = start;
    int ep = mid + 1;
    while (fp <= mid && ep <= end)
    {
        temp.push_back(arr[fp] > arr[ep] ? arr[ep++] : arr[fp++]);
    }

    while (fp <= mid)
    {
        temp.push_back(arr[fp++]);
    }

    while (ep <= end)
    {
        temp.push_back(arr[ep++]);
    }

    for (int i = start; i <= end; i++)
        arr[i] = temp[i - start];
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

void selection_sort(int arr[], int size)
{
    int index = 0;

    while (index < size - 1)
    {
        int min = index;
        for (int i = index; i < size; i++)
        {
            if (arr[i] < arr[min])
                min = i;
        }
        int temp = arr[min];
        arr[min] = arr[index++];
        arr[index - 1] = temp;
    }
}

void bubble_sort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        bool hasSwap = false;
        for (int j = 1; j <= i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                hasSwap = true;
            }
        }

        if (!hasSwap)
            break;
    }
}

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
        for (int j = i; j > 0; j--)
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
}

// this returns index
int place_num_get_pivot(int arr[], int start, int end)
{
    int pivot = arr[start];
    int l = start;
    int e = end;
    while (l < e)
    {
        while (arr[l] <= pivot && l <= end - 1)
            l++;
        while (arr[e] > pivot && e >= start + 1)
            e--;
        if (l < e)
            swap(arr[l], arr[e]);
    }
    swap(arr[start], arr[e]);
    return e;
}

void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = place_num_get_pivot(arr, start, end);
        quick_sort(arr, start, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
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

    dprint(numArray, size);
    // merge_sort(numArray, 0, size - 1);
    // selection_sort(numArray, size);
    // insertion_sort(numArray, size);
    quick_sort(numArray, 0, size - 1);
    dprint(numArray, size);

    delete numArray;

    return 0;
}