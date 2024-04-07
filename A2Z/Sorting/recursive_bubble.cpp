#include "../header.h"

void recur_bubble_sort(int arr[], int max)
{
    if (max == 0)
        return;

    for (int i = 1; i <= max; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            int t = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = t;
        }
    }

    recur_bubble_sort(arr, max - 1);
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

    recur_bubble_sort(numArray, size - 1);

    dprint(numArray, size);

    return 0;
}