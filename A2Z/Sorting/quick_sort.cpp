#include "../header.h"

void quick_sort(int size, int arr[])
{
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

    quick_sort(size, numArray);

    dprint(numArray, size);

    return 0;
}