#include <iostream>
#include <cstring>
#include <string>
// #include <gmp.h>
using namespace std;


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    // char arr[100];
    // cin.getline(arr,100,'\n');

    // char arr2[100];
    // strcpy(arr2,arr);

    // cout << arr2 << endl << strlen(arr2) << endl;

    // strcmp to create a pw checker fun
    // char pw[20] = "hello@7";
    // char pwin[20];
    // cin >> pwin;

    // cout << (strcmp(pw,pwin) == 0 ? "pass" : "fail") << strcmp(pw,pwin) << endl;

    // strcmp returns diff value of first character hit
    //
    // Returns an integral value indicating the relationship between the strings:
    // return value	indicates
    //
    // <0	the first character that does not match has a lower value in ptr1 than in ptr2
    // 0	the contents of both strings are equal
    // >0	the first character that does not match has a greater value in ptr1 than in ptr2

    // char * val = "hello@7"; //not allowd in std c++
    // val[1] = '0'; exited with code=3221225477 in 0.604 seconds
    // cout << strcmp(pw,val) << endl;


    //strcat
    // char dest[100] = "abcd";
    // char src[] = "efgh";

    // strcat_s(dest,64,src);

    // cout << dest << endl;

    // char arr[100];
    // cin.getline(arr,100);

    // int alphabet = 0;
    // int digit = 0;
    // int space = 0;
    // int symbol = 0;

    // int total = strlen(arr);

    // for(char x : arr){
    //     if(x == '\0')
    //         break;
    //     if(isdigit(x))
    //         digit++;
    //     if(isalpha(x))
    //         alphabet++;
    //     if(isspace(x))
    //         space++;
    //     cout << x ;
    // }

    // cout << endl << digit << " " << alphabet << " " << space << " " << (total - (digit+alphabet+space)) << endl; 

    // string s = "programming is ";
    // s+= "fun";
    // cout << s << endl;
    // cout << s.length() << endl;
    // cout << s.capacity() << endl;

    // s.shrink_to_fit();
    // cout << s.capacity() << endl;

    // cout << s.at(5) << endl;
    // cout << s[5] << endl;

    // cout << s[100] << endl; //unsafe code - doesnt throw error when out of bounds
    // cout << s.at(100) << endl;

    // string s = "3";
    // s+= "s";
    // s+= to_string(5);
    // //char x = s.at(0);
    // int x = s.at(0) - 48;
    // cout << s;


    // string num;
    // cin >> num;
    
    // int in_hand = 1;
    // string result = "";
    
    // for(int i = num.length()-1; i >=0; i--){
    //     int num_i = (num.at(i) - 48) + in_hand;
    //     if(num_i > 9) {
    //         in_hand = 1;
    //         result = to_string(num_i%10) + result;
    //     }
    //     else {
    //         in_hand = 0;
    //         result = to_string(num_i) + result;
    //     }
    // }

    // if(in_hand > 0)
    //     result = to_string(in_hand) + result;
    
    // cout << result;


    int last_pos = 0;

    string a = "AXY";
    string b = "ADXCPY";
    
    string small;
    string large;
    
    if(a.length() > b.length()){
        small = b;
        large = a;
    }else{
        small = a;
        large = b;
    }
    
    for(int i=0; i < a.length(); i++){
        char x = small.at(i);
        
        if(large.find_first_of(x,last_pos)!=std::string::npos){
            last_pos = i;
        }else
            cout << "ok";
    }

    

    return 0;
}