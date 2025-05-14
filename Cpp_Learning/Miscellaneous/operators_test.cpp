#include <iostream>
using namespace std;

// void nunu(int x=5, int y =5, int z){
//     cout << x << y;
// }

void square(int *x , int *y){
    *x = (*x) * --(*y);
}

int main(){

    // string f = true ? "yes" : "no";
    // cout << f;

    // for(int i = 0; i> 5 ; i++){
    //     cout << i;
    // }

    // // for(int i = 0; i<=8 ; i+=2){
    // //     cout << i;
    // // }

    // for(int i = 1; i<=8 ; i*=2){
    //     cout << i;
    // }

    //nunu(5);

    int number = 30;
    square(&number, &number);
    cout << number;
}


