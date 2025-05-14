#include <iostream>
// #include <gmp.h>
using namespace std;

template <class T>
class Sample{
    public:
        T print(T a){
           // cout << a << endl;
            return a;
        }
};


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\error.txt","w",stderr);

    Sample<int> * a = new Sample<int>();
    cout << a->print(5);

    return 0;
}