#include <iostream>
// #include <gmp.h>
using namespace std;

void doubleMoney(int *money){
    *money =  *money *2;
}

//referene mode
void doubleMoney(int &money){
    money =  money *2;
}

int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    //Address of operator
    int x = 10;
    cout << &x << endl;

    char y = 'X';
    cout << &y;
    // cout << (void*)&y <<endl;

    //Pointers hold address of variables
    char*  yptr;
    yptr = &y;
    cout << *yptr;

    //call by address
    int money = 100;
    doubleMoney(&money);
    cout << endl << "Money : " << money << endl;

    //Reference variables
    int rv = 10;
    int &rvp = rv; //alias, y is now x same bucket

    //Call by reference
    int mTest = 2000;
    doubleMoney(mTest);
    cout << "Ref mode : " << mTest << endl;

    /* 
        Notes :
        1. An array name is a constant pointer to the first element of the array
        2. Pointers can be incremented or decremented, but array names can't be
        3. Array elements can be accessed with pointer arithmetic
    */
    return 0;
}