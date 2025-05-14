#include <iostream>
using namespace std;

bool lSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return true;
    }

    return false;
}

int main(){
    int arr[100] = {5,4,6,7};

    cout << lSearch(arr,4,5) << endl; 
}