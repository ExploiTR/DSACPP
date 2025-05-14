#include <iostream>
// #include <gmp.h>
using namespace std;


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    // char arr[5] = {'a','b','c','d','\0'}; 
    // char * arr = "ss";

    // cout << arr;

    /*
    * Now if you want to get a line input with space
    * like read all till $ symbol triggered
    */

    // char ch = cin.get(); //reads 1 char at a time, reads all chars like \n \r etc
    // do{
    //     cout << ch << endl;
    //     ch = cin.get();
    // }while(ch!='.');


    char arr[100];
  //  cin.getline(arr,100); //reads till newline
    cin.getline(arr,100,'.');
    cout << arr << endl;

    return 0;
}