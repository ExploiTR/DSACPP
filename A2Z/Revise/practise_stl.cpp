#include "../header.h"

bool greater_(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
        return true;
    else if (a.second == b.second)
        return a.first > b.first;
    else
        return false;
}

int main()
{
    iosetup();

    int size;
    cin >> size;

    //  int *numArray = new int[size]();

    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        //  numArray[i] = temp;
    }

    pair<int, int> x[] = {{2, 3}, {4, 5}, {1, 3}, {5, 6}};

    sort(x, x + size, greater_);

    for (auto r : x)
    {
        cout << r.first << " " << r.second << endl;
    }

    //  dprint(numArray, size);

    return 0;
}