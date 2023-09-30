#include <iostream>
#include <unordered_set>

using namespace std;

int main(){

    unordered_set<int> set1{1,5,6,12,3,4};

    int inp;
    cin >> inp;

    if(set1.find(inp)!=set1.end()){
        cout << "Got it";
    }
    
    return 0;
}