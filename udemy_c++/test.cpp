#include <iostream>
// #include <gmp.h>
using namespace std;

char largestFrequencyCharacter (char c[], int size) {
    int maxFreq = 0;
    char maxFreqChar = '\0';
    int curFreq = 0;
    char curFreqChar = '\0';
    
    for(int i =0; i < size; i++){
        if(curFreqChar != c[i]){
            if(curFreq > maxFreq){
                maxFreqChar = curFreqChar;
                maxFreq = curFreq;
            }
            curFreqChar = c[i];
            curFreq = 1;
            cout << "triggered" << c[i] << endl;
        }
        else
            curFreq++;
    }
    
    return maxFreqChar;
}

int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    char c[] = {'a','b','c','d','e','e','e'};
    cout << largestFrequencyCharacter(c,7)<<endl;

    return 0;
}

