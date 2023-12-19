#include <iostream>
// #include <gmp.h>
using namespace std;

//generic fucntion for max

template <typename T>
T maxx(T a, T b){
    if(a > b)
        return a;
    return b;
}

int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\error.txt","w",stderr);

    int max = maxx<int>(5,3);
    float maxF = maxx<float>(5.5,33.3);

    cout << max << endl;
    cout << maxF;

    return 0;
}