#include <iostream>
// #include <gmp.h>
using namespace std;

int binSearchLoop(int * arr, int len, int key){
    int s = 0;
    int e = len-1;

    while(s <= e){
        int mid =  (s+e)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key){
            
        }else{

        }
    }
}

int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    cin >> x >> y;
    cout << x + y <<endl;

    return 0;
}