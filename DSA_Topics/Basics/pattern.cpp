#include "../header.h"

void nstartriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void alphaHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < 2 * i; j++)
        {

            cout << ch << " ";

            if (j < i)
                ch++;
            else
                ch--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }
}

void alphaTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        char runtill = (ch - i + 1);
        for (; ch >= runtill; ch--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void symmetry(int n)
{
    int stars = 1;
    int spaces = n + 3;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        stars = i > n ? stars - 1 : stars + 1;
        spaces = i > n ? spaces + 2 : spaces - 2;

        for (int j = 1; j < stars; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j < stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void getStarPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void getNumberPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int up = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;

            cout << n - min(min(up, bottom), min(left, right));
        }
        cout << endl;
    }
}

int main()
{
    iosetup();

    // the rate at which the time taken increases w.r.t the size of input

    /*

*    *
**  **
******
**  **
*    *

    */
    int i;
    cin >> i;
    // nStarTriangle(i);

    // alphaHill(i);

    // alphaTriangle(i);

    // symmetry(i);

    getNumberPattern(i);

    return 0;
}
