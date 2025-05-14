#include <iostream>
// #include <gmp.h>
using namespace std;

/*
 * Problem Desc :
 * Suppose the arr-matrix is :
 *
 * [1 4 2 5]
 * [6 3 6 4]
 * [3 5 1 5]
 * [7 8 0 2]
 *
 * print : 1 4 2 5 4 5 2 0 8 7 3 6 3 6 1 5 (LTR rotation)
 *
 * mastering-cplusplus-prateek-narang-hindi
 * /learn/
 * lecture/
 * 39121612?start=795
 */

int main()
{
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt", "r", stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt", "w", stdout);

    int m, n;
    int arr[100][100];

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Spiral : " << endl
         << endl;

    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;

    while (startCol < endCol && startRow < endRow)
    {

        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << " ";
        }

        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
        }

        for (int i = endCol - 1; i >= startCol; i--)
        {
            cout << arr[endRow][i] << " ";
        }

        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            cout << arr[i][startCol] << " ";
        }

        startRow++;
        endCol--;
        startCol++;
        endRow--;
    }

    return 0;
}