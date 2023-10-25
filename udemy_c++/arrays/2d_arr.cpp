#include <iostream>
// #include <gmp.h>
using namespace std;


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    int m, n;
    int arr[100][100];

    cin >> m >> n;

    for(int i =0; i< m ; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0; i< m ; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /*
    * Under the hood in mem :
    * 
    * Row Major : (Majority)
    * 
    *  1 2 3 4 | 5 0 2 1 | 3 2 7 8 | 2 4 5 9
    *  <-row1-> <-row2->  <-row3->  <-row4->
    * 
    * Column Major :
    * 
    *  1 5 3 2 | 2 0 2 4 | 3 2 7 5 | 4 1 8 9
    *  <-col1-> <-col2->  <-col3->  <-col4->
    */

    return 0;
}

