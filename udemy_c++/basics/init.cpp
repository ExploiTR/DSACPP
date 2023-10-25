#include <iostream>
#include <iomanip>
// #include <gmp.h>
using namespace std;


int main(){
    int x,y;

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin >> x >> y;
   // cout << (char)(x + y) << endl;

    // for(int i =0; i < 128 ; i++){
    //     cout << i << " -> " << (char)i << endl;
    // }

    const auto pi =  22.0/7;
    cout << fixed << setprecision(50) << pi;

    return 0;
}