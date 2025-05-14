#include <iostream>
using namespace std;

int main(){
    int arr[100][100];

    int rSize = 5;
    int cSize = 5;

    for(int i = 0; i < rSize; i++){
        for(int j = 0; j < cSize; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < rSize; i++){
        for(int j = 0; j < cSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < rSize; i++){
        for(int j = 0; j < cSize; j++){
            if(j%2 == 0){
                cout << arr[i][j] << " ";
            }else{
                cout << arr[rSize - 1 - i][j] << " ";
            }  
        }
        cout << endl;
    }
}