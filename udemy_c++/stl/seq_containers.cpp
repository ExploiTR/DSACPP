#include "../header.h"

void pArr(int *arr){
    arr[5] = 6;

    cout << arr[5] << endl;
}


int main(){
    iosetup();

    // Sequential Containers :

    // Array
    // Vector
    // Dequeue -> double ended queue
    // List -> Doubly linked list
    // Forward List -> Singly linked list

    int arr[100]; //c-style array
    arr[0] = 5;
    pArr(arr);

    array<int,6> a = {1,1,1,1,1,1};

    return 0;
}