#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;

int x = 5; //global variable

//Cascading Operator :
// It is the practice of chaining multiple operations together in a single statement, 
// typically achieved by returning *this from an overloaded operator.

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x = 10;

    cout << x << endl; //local variable
    cout << ::x; //scope resoliution operator : it has the highest precedence in c++

    //sizeof operator
    cout << sizeof(int) << endl;

    //ternanry operator
    cin >> x;
    cout << (x > 25 ? "hot" : "cool" )<< endl;

    //dot operator
    //dog.bark()

    // -> used with pointer to objects
    // dog*d; d->bark();



    return 0;
}