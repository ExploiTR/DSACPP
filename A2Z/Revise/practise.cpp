#include "../header.h"

void print_pattern1(int size)
{
    cout << "Pattern 1" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern2(int size)
{
    cout << "Pattern 2" << endl;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern3(int size)
{
    cout << "Pattern 3" << endl;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern4(int size)
{
    cout << "Pattern 4" << endl;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern5(int size)
{
    cout << "Pattern 5" << endl;
    for (int i = size; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern6(int size)
{
    cout << "Pattern 6" << endl;
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern7(int size)
{
    cout << "Pattern 7" << endl;
    for (int i = 1; i <= size * 2; i++)
    {
        
        cout << endl;
    }
    cout << endl;
}

void print_pattern8(int size)
{
}

void print_pattern9(int size)
{
}

void print_pattern10(int size)
{
}

void print_pattern11(int size)
{
}

void print_pattern12(int size)
{
}

void print_pattern13(int size)
{
}

void print_pattern14(int size)
{
}

void print_pattern15(int size)
{
}

void print_pattern16(int size)
{
}

void print_pattern17(int size)
{
}

void print_pattern18(int size)
{
}

void print_pattern19(int size)
{
}

void print_pattern20(int size)
{
}

void print_pattern21(int size)
{
}

void print_pattern22(int size)
{
}

int main()
{
    iosetup();

    int size;
    cin >> size;

    // int *numArray = new int[size]();

    // int temp;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> temp;
    //     numArray[i] = temp;
    // }

    // dprint(numArray, size);

    print_pattern1(size);
    print_pattern2(size);
    print_pattern3(size);
    print_pattern4(size);
    print_pattern5(size);
    print_pattern6(size);
    print_pattern7(size);
    print_pattern8(size);
    print_pattern9(size);
    print_pattern10(size);
    print_pattern11(size);
    print_pattern12(size);
    print_pattern13(size);
    print_pattern14(size);
    print_pattern15(size);
    print_pattern16(size);
    print_pattern17(size);
    print_pattern18(size);
    print_pattern19(size);
    print_pattern20(size);
    print_pattern21(size);
    print_pattern22(size);

    return 0;
}