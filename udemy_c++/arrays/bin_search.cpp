#include <iostream>
#include <algorithm>
// #include <gmp.h>
using namespace std;


/*
 Log N
*/
int binSearchLoop(int * arr, int len, int key){
    int s = 0;
    int e = len-1;

    while(s <= e){
        int mid =  (s+e)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key){
            e = mid -1;
        }else{
            s = mid+1;
        }
    }

    return -1;
}

int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    int arr[] = {1,3,3,3,3,3,5,7,11,24,56,67,897,4565,12345};
    // cout << "Bin : " <<  binSearchLoop(arr, 11, 56) << endl;

    // STL Function:
    // binary_search() : returns T/F
    // lower_bound() : Iterator to first no >= key
    // upper_bound() : Iterator to first no > key
    // to get frequency of any number we can do UB-LB

    auto present =  binary_search(arr,arr+11,24);
    cout << present << endl;

    auto ldx = lower_bound(arr,arr+11,10);
    cout << "LB for 11 : " << ldx - arr << endl;

    auto udx = upper_bound(arr,arr+11,4);
    cout << "UB for 11 : " << udx - arr << endl;


    auto ldx_3 = lower_bound(arr,arr+11,3);
    cout << "LB for 3 : " << ldx - arr << endl;

    auto udx_3 = upper_bound(arr,arr+11,3);
    cout << "UB for 3 : " << udx - arr << endl;

    cout << "Frequncy for 3 : " << udx_3 - ldx_3 << endl; //imp

    return 0;
}