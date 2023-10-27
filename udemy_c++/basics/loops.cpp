#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;

int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    int x = 10;

    while(x < 100){
        x++;
    }

    cout << x << endl; //local variable

    return 0;
}