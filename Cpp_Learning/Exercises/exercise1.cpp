#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> arr(n);
    
    for(int i=1; i <= n ;i++){
        if(i%3==0 && i%5==0)
            arr[i-1] = "FizzBuzz";
        else if(i%5==0)
            arr[i-1] = "Buzz";
        else if(i%3 == 0)
            arr[i-1] = "Fizz";
        else
            arr[i-1] = to_string(i);
    }
    
    return arr;
}

int main()
{
    vector<string> arr = fizzbuzz(15);

    for(int i=0; i<arr.size();i++)
        cout << arr[i] << " : ";
}