#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>
#include <algorithm>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

vector<pair<int,int>> pairSum(vector<int> arr, int sum){
    unordered_set<int> set;
    vector<pair<int,int>> result;

    int temp;
    for(int i = 0; i< arr.size(); i++){
        temp = sum - arr[i];

        if(set.find(temp)!=set.end()){
            result.push_back(make_pair(arr[i],temp));
        }

        set.insert(arr[i]);
    }

    return result;
}


int main(){
    auto cl = clock();

    vector<int> arr{1,4,5,-6,2,5,4,6,8,0};
    sort(arr.begin(),arr.end());

    vector<pair<int,int>> pairs = pairSum(arr,8);

    for(pair<int,int> pair : pairs){
        cout << pair.first << " : " << pair.second << endl;
    } 
    
    auto ce = clock();

    cout << "\n Time : " << ce-cl << endl;
}