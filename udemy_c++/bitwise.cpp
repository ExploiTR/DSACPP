#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x,y;
    cin >> x >> y;

    cout << x << " is " << ((x&1) ? "odd" : "even") << endl;
    cout << y << " is " << ((y&1) ? "odd" : "even") << endl;

    cout << (x|y) << endl; //or
    cout << (x^y) << endl; //xor

    cout << (~x) << endl; //not - unary
    cout << (~y) << endl; //not - unary - 2's compliment form - flip all the bits and add 1 to it.

    cout << (10 >> 1) << endl; //right shift = /2 -> a>>b => a/2^b
    cout << (10 << 1) << endl; //right shift = *2 -> a>>b => a*2^b


    return 0;
}