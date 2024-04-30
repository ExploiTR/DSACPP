#include "../header.h"

// take - not take
void printF(int index, vector<int> &ds, int arr[], int n)
{
    if (index == n)
    {
        dprint(ds);
        return;
    }

    if (index == 0)
        cout << "{}";

    printF(index + 1, ds, arr, n);

    ds.push_back(arr[index]);
    printF(index + 1, ds, arr, n);
    ds.pop_back();
}

void printFk(int index, int sum, vector<int> &ds, int arr[], int n, int k)
{
    if (index == n)
    {
        if (sum == k)
        {
            dprint(ds);
            return;
        }
        return;
    }

    printFk(index + 1, sum, ds, arr, n, k);

    ds.push_back(arr[index]);
    printFk(index + 1, sum + arr[index], ds, arr, n, k);
    ds.pop_back();
}

bool printFkb(int index, int sum, vector<int> &ds, int arr[], int n, int k)
{
    if (index == n)
    {
        if (sum == k)
        {
            dprint(ds);
            return true;
        }
        return false;
    }

    if (printFkb(index + 1, sum, ds, arr, n, k))
        return true;

    ds.push_back(arr[index]);
    if (printFkb(index + 1, sum + arr[index], ds, arr, n, k))
        return true;
    ds.pop_back();

    return false;
}

int printFki(int index, int sum, int arr[], int n, int k)
{
    if (index == n)
    {
        if (sum == k)
        {
            //  dprint(ds);
            return 1;
        }
        return 0;
    }

    int x = printFki(index + 1, sum, arr, n, k);

    int y = printFki(index + 1, sum + arr[index], arr, n, k);

    return x + y;
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

    vector<int> ds;
    // SUBSEQUENCE  printF(0, ds, numArray, size);

    cout << printFki(0, 0, numArray, size, 4);

    return 0;
}