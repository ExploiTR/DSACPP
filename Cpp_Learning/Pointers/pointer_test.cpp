#include <iostream>
using namespace std; 

void testPtrF(int * in){
    cout << *in << endl;

    *in = *in * 10;
}

void testPtrRefVar(int &in){
    in = in * 100;
}

int main(){
    int x = 45678;
    char z = '*';

    cout << z << " -> "  << (void*)&z << endl;

    int * xp = &x;
    int ** xpp = &xp;
    cout << xp << endl;
    cout << xpp << endl;

    cout << **xpp << endl; //dereference operator

    int * np = NULL;
    int * np2 = 0;

    cout << np << np2 << endl;

    int ll = 5;
    int &lk = ll; //reference variable

    cout << ll << lk << endl;

    testPtrF(&ll);

    cout << lk << endl;

    testPtrRefVar(ll);

    cout << lk << endl;

}