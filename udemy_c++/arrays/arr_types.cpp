#include <iostream>
// #include <gmp.h>
using namespace std;

// Note : This arr[] is not an array, it may 
// look like one but is not.
// it behaves like a pointer, one can do *(a+i) to get ith index
// and thats perfectly ok.

void print(int arr[], int n){
    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    // Note :
    //
    // 1. In case of fetching array elems out of bounds,
    // 2. if it's a case of illegal memory access it'll throw segmentation fault
    // 3. otherwise put garbage values
    // 4. if its in bounds - in case the the array is initialized (not dynamically allocated)
    // 5. with less than the particular index
    // 6. it'll give 0 or else garbage value;

    int b_arr[10];
    int n;
    cin >> n;

    return 0;  
}