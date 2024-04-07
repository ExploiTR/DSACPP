#include "../header.h"

void recursive_insertion_sort(int arr[], int index, int high)
{
    if (index == high)
        return;

    int j = index;

    while (j > 0 && arr[j] < arr[j - 1])
    {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;

        j--;
    }

    recursive_insertion_sort(arr, index + 1, high);
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

    recursive_insertion_sort(numArray, 1, size);

    dprint(numArray, size);

    return 0;
}