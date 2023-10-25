#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;

//inline inlines the code inside fucntion at call point while compiling
inline void printName(string name = "test"){
    cout << name << endl;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    printName("Eshita");
    printName();

    return 0;
}