#include "../../header.h"
using namespace std;

/*
 * Rotate the matrix.
 * Implement a function that takes 2-D matrix as argument and returns the matrix which is 90 degree rotated clockwise
 *
 * Sample Input
 *
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 3 4
 * 1 2
 *
 * Sample Output
 *
 * 7 4 1
 * 8 5 2
 * 9 6 3
 * 1 3
 * 2 4
 *
 */

vector<vector<int>> rotateTheMatrix(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix.at(0).size();

    vector<vector<int>> rotatedMatrix(n, vector<int>(m));

    for (int i = 0; i < m; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            cout << "[" << i << "," << n-j-1 << "]" << " <- " << "[" << j << "," << i << "]" << endl;
            rotatedMatrix[i][n-j-1] = matrix[j][i];
        }
    }

    return rotatedMatrix;
}

int main()
{
    iosetup();

    vector<vector<int>> matrix;
    matrix.push_back({1, 2, 3});
    matrix.push_back({4, 5, 6});
    matrix.push_back({7, 8, 9});

    auto metrix = rotateTheMatrix(matrix);

    // Iterate over each row of the matrix
    for (const vector<int> &row : metrix)
    {
        // Iterate over each element in the row
        for (int element : row)
        {
            // Print the element
            cout << element << " ";
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}