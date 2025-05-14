#include "../header.h"

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int find_partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] >= pivot && i < high)
            i++;

        while (arr[j] < pivot && j > low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(int arr[], int low, int high)
{

    if (low < high)
    {
        int pdx = find_partition(arr, low, high);
        quick_sort(arr, low, pdx - 1);
        quick_sort(arr, pdx + 1, high);
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

    quick_sort(numArray, 0, size - 1);

    dprint(numArray, size);

    return 0;
}