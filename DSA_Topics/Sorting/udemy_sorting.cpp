#include <iostream>
#include <algorithm>

// #include <gmp.h>
using namespace std;

void printArray(int * arr, int len){
    cout << " Array : ";
    for(int i = 0; i < len;i ++)
        cout << arr[i] << ",";
    cout << endl;
}

bool comparator(int a, int b){
    return a > b;
}

int main(){

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    int arr[] = {1,25,35,4};

    sort(arr,arr+4,comparator);

    printArray(arr,4);

    return 0;
}