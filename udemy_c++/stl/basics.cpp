#include "../header.h"

int main(){
    iosetup();

    /*
    1. Container
    2. Interators
    3. Algorithms
    */

    vector<int> vec = {1,2,3,4};
    vec.push_back(7);

    cout << vec.size() << endl;

    //auto iterator = vec.begin();
    // *iterator = 50;
    // cout << (*iterator) << endl;

    for(auto iterator = vec.begin(); iterator!=vec.end(); iterator++){
        cout << (*iterator) << " ";
    }

    cout << endl;

    //algorithm 
    vector<int>::iterator it = find(vec.begin(),vec.end(),4);
    auto tx = it != vec.end() ? "Found": "Not Found";
    cout << tx << endl;
    

    return 0;
}