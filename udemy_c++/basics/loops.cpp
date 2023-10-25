#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x = 10;

    while(x < 100){
        x++;
    }

    cout << x << endl; //local variable

    return 0;
}