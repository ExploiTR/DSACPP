#include <iostream>
using namespace std;

int power(int a, int n){
    if(n==0)
        return 1;
    
    auto halfPower = power(a,n/2);
    auto halfPowerSqr = halfPower * halfPower;

    if(n%2 !=0){
        return a * halfPowerSqr;
    }

    return halfPowerSqr;
}

int main(){
    auto result = power(5,2);
    cout << result << endl;
}