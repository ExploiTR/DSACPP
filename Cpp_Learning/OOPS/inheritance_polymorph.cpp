#include <iostream>
// #include <gmp.h>
using namespace std;

class User{
    public:
        string name;
        long id;

        User(string name, long id){
            this->name = name;
            this->id = id;
        }

        void disp(){
            cout << name << " -> " << id << endl;
        }
};

/*
* Public Inheritance : 
* - Public -> Public
* - Private -> No access
* - Protected -> Protected
*/
class Employee : public User{

    public:
        int score;

        Employee(string name, long id, int score) : User(name,id){
            this->score = score;
        }

        void disp(bool unused){
            User::disp();
            cout << "Score : " << score << endl;
        }

};

/*
* Public Inheritance : 
* - Public -> Private
* - Private -> No access
* - Protected -> Private
*/
class Employee2 : private User{

};


int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    cin >> x >> y;
    cout << x + y <<endl;

    Employee employee("meow",122345L,12);
    employee.disp(true);

    return 0;
}