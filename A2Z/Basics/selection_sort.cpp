#include "../header.h"

void selection_sort(int size, int arr[])
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallest_index = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[smallest_index])
            {
                smallest_index = j;
            }
        }

        if (arr[i] != arr[smallest_index])
        {
            int temp = arr[i];
            arr[i] = arr[smallest_index];
            arr[smallest_index] = temp;
        }
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

    selection_sort(size, numArray);

    dprint(numArray, size);

    return 0;
}