#include <iostream>
#include <algorithm>

using namespace std;


int linearSearch(int * arr, int len, int key){
    for(int i = 0 ; i< len; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    int arr[] =  {4,5,6,2,3,5};
    // cout << linearSearch(arr,6,3) << endl;

    //STL Method : find
    auto pos = find(arr,arr+6,3); //address of 0th element, address of sizeth-1 element, key
    //find function returns the address of the found item so we can do that address 
    //- 0th address to get that index
    //also in case item not found index returned is equal to the size of the array

    cout << *pos << endl; //get current item
    cout << pos - arr << endl; //get current pos
    
    
    return 0;  
}