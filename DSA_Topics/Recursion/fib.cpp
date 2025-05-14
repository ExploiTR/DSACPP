#include <iostream>
using namespace std;

int fib(int a){
    if(a < 1)
        return 0;
    else if(a == 1)
        return a + 1;
    
    else
        return fib(a-1) + fib(a-2);
}

int main(){
    auto result = fib(5);
    cout << result << endl;
}