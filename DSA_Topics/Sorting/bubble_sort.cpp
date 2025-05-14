#include "../header.h"

void bubble_sort(int size, int arr[])
{
    for (int i = size - 1; i >= 1; i--)
    {
        dprint(arr, size);
        
        int didSwap = 0; // <-- optimized N is best case. (sorted)

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap++;
            }
        }

        if (didSwap == 0) // <-- optimized N is best case. (sorted)
            break;        // <-- optimized N is best case. (sorted)
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

    bubble_sort(size, numArray);

    dprint(numArray, size);

    return 0;
}