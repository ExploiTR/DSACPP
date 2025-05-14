#include <iostream>
using namespace std;

// int checkArr(int arr[]){
//     cout << sizeof(arr) << endl; IMP : it will just give an warning if you dont return anything. 
// }

void checkArr(int * arr, int size){
    for(int z = 0 ; z < size ; z++){
        cout << arr[z] << endl;
    }
}

int main(){
    int arr[100] = {5,4,6,7};

    checkArr(arr,4);

    // for(int c : arr){
    //     cout << c << endl;
    // }

    // int count =  sizeof(arr)/sizeof(int);
    // for(int c=0; c < count; c++){
    //     cout << arr[c] << endl;
    // }

    //dynamically chaning size of arr
    // int un;
    // cin >> un;

    // int arr2[un]; //not an error
    // cout << sizeof(arr2)/sizeof(int) << endl;

    // for(int c=0; c < un; c++){
    //     cin >> arr2[c];
    // }

    // for(int c=0; c < un; c++){
    //     cout << arr2[c] << ",";
    // }

    return 0;
}