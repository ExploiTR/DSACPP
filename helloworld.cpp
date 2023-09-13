#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> arr = {1,2,34,4,5};

    arr.push_back(45);

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
}