#include "../header.h"

void pArr(int *arr){
    arr[5] = 6;

    cout << arr[5] << endl;
}


void new_pArr(array<int,6> a){

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
    
    //queue
    deque<int> deq;
    deq.push_back(10);
    deq.push_back(20);

    deq.push_front(10);
    deq.push_front(30);

    //list
    list<int> l;
    l.push_back(56); //double-sided iteration
    l.push_front(56);

    //forward-list
    forward_list<int> fl;
    fl.push_front(56);

    return 0;
}