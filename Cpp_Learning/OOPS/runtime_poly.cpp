#include <iostream>
// #include <gmp.h>
using namespace std;

class User{
    public:
    virtual void display(){
        cout << "user" << endl;
    }
};

class Enemy : public User{
    public:
    void display(){
        cout << "enemy" << endl;
    }
};

class Player : public User{
    public:
    void display(){
        cout << "player" << endl;
    }
};

int main(){
    int x,y;

    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    User *u = new Player(); 
    u->display();

    return 0;
}