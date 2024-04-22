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
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < (size - i); j++)
            cout << " ";

        for (int j = 1; j < i * 2; j++)
            cout << "*";

        for (int j = 0; j < (size - i); j++)
            cout << " ";

        cout << endl;
    }
    cout << endl;
}

void print_pattern8(int size)
{
    cout << "Pattern 8" << endl;
    for (int i = size; i >= 1; i--)
    {
        for (int j = 0; j < (size - i); j++)
            cout << " ";

        for (int j = 1; j < i * 2; j++)
            cout << "*";

        for (int j = 0; j < (size - i); j++)
            cout << " ";

        cout << endl;
    }
    cout << endl;
}

void print_pattern9(int size)
{
    cout << "Pattern 9" << endl;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < (size - i); j++)
            cout << " ";

        for (int j = 1; j < i * 2; j++)
            cout << "*";

        for (int j = 0; j < (size - i); j++)
            cout << " ";

        cout << endl;
    }
    for (int i = size; i >= 1; i--)
    {
        for (int j = 0; j < (size - i); j++)
            cout << " ";

        for (int j = 1; j < i * 2; j++)
            cout << "*";

        for (int j = 0; j < (size - i); j++)
            cout << " ";

        cout << endl;
    }
    cout << endl;
}

void print_pattern10(int size)
{
    cout << "Pattern 10" << endl;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    cout << endl;
}

void print_pattern11(int size)
{
    cout << "Pattern 11" << endl;

    for (int i = 1; i <= size; i++)
    {
        int tag = i % 2 == 0 ? 1 : 0;
        for (int j = 1; j <= i; j++)
            cout << (tag = !tag);

        cout << endl;
    }
    cout << endl;
}

void print_pattern12(int size)
{
    cout << "Pattern 12" << endl;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= 2 * (size - i); j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern13(int size)
{
    cout << "Pattern 13" << endl;

    int counter = 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << counter++;
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern14(int size)
{
    cout << "Pattern 14" << endl;

    for (int i = 1; i <= size; i++)
    {
        for (char j = 'A'; j < i + 'A'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern15(int size)
{
    cout << "Pattern 15" << endl;

    for (int i = size; i >= 1; i--)
    {
        for (char j = 'A'; j < i + 'A'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern16(int size)
{
    cout << "Pattern 16" << endl;

    for (int i = 1; i <= size; i++)
    {
        char t = 'A' + i - 1;
        for (char j = 1; j <= i; j++)
        {
            cout << t;
        }
        cout << endl;
    }

    cout << endl;
}

void print_pattern17(int size)
{
    cout << "Pattern 17" << endl;

    for (int i = 1; i <= size; i++)
    {
        for (int x = 1; x <= size - i; x++)
        {
            cout << " ";
        }

        for (char j = 'A'; j < i + 'A'; j++)
        {
            cout << j;
        }

        for (char j = i + 'A' - 2; j >= 'A'; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    cout << endl;
}

void print_pattern18(int size)
{
    cout << "Pattern 18" << endl;

    for (int i = 1; i <= size; i++)
    {
        for (char j = 'A' + (size - i); j < 'A' + size; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << endl;
}

void print_pattern19(int size)
{
    cout << "Pattern 19" << endl;

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (size - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (size - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}

void print_pattern20(int size)
{
    cout << "Pattern 20" << endl;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (size - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (size - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}

void print_pattern21(int size)
{
    cout << "Pattern 21" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_pattern22(int size)
{
    cout << "Pattern 22" << endl;

    for (int i = 0; i < 2 * size - 1; i++)
    {
        for (int j = 0; j < 2 * size - 1; j++)
        {
            cout << size - min(min(i, 2 * size - i - 2), min(j, 2 * size - j - 2));
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    iosetup();

    int size;
    cin >> size;

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