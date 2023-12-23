#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstring>
// #include <gmp.h>
using namespace std;

// char largestFrequencyCharacter (char c[], int size) {
//     int maxFreq = 0;
//     char maxFreqChar = '\0';
//     int curFreq = 0;
//     char curFreqChar = '\0';
    
//     for(int i =0; i < size; i++){
//         if(curFreqChar != c[i]){
//             if(curFreq > maxFreq){
//                 maxFreqChar = curFreqChar;
//                 maxFreq = curFreq;
//             }
//             curFreqChar = c[i];
//             curFreq = 1;
//             cout << "triggered" << c[i] << endl;
//         }
//         else
//             curFreq++;
//     }
    
//     return maxFreqChar;
// }


void map_print(unordered_map<string,vector<string>> map){
    for (auto entry : map) {
        const std::string& key = entry.first;
        const std::vector<std::string>& values = entry.second;

        std::cout << "Key: " << key << std::endl;
        std::cout << "Values:";

        for (const std::string& value : values) {
            std::cout << " " << value;
        }

        std::cout << std::endl;
    }
}

int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    unordered_map<string,vector<string>> map;

    char* k1 = (char*)malloc(128);
    strcpy(k1,"abc\0");

    char* v1 = (char*)malloc(128);
    strcpy(v1,"axc\0");

    char* v2 = (char*)malloc(128);
    strcpy(v2,"azc\0");

    map[k1].push_back(v1);
    map[k1].push_back(v2);

    free(k1);
    free(v1);
    free(v2);

    map_print(map);

    return 0;
}

