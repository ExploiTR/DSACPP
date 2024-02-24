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

vector<vector<int>> rotateTheMatrix(vector<vector<int>> matrix) {
    for(auto x : matrix){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }

}

int main()
{
    iosetup();

    

    return 0;
}