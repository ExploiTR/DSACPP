#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <forward_list>
#include <list>
#include <stack>
#include <cmath>
#include <string>

using namespace std;

void iosetup(){
    freopen("..\\input.txt","r",stdin);
    freopen("..\\output.txt","w",stdout);
    freopen("..\\error.txt","w",stderr);
}

// Function to print array
template<typename T, size_t N>
void dprint(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to print vector
template<typename T>
void dprint(const std::vector<T>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Function to print map
template<typename Key, typename Value>
void dprint(const std::map<Key, Value>& map) {
    for (const auto& pair : map) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }
}

// Function to print set
template<typename T>
void dprint(const std::set<T>& set) {
    for (const auto& elem : set) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Function to print int* type array
void dprint(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}