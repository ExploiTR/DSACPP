#include <iostream>
#include <string>
// #include <gmp.h>
using namespace std;


class Player{
    private:
        string fName;
        string lName;
        string handle;
        int guess;

    public:
        Player(){

        }

        Player(string fName, string lName, string handle){
            this->fName = fName;
            this->lName = lName;
            this->handle = handle;
        }

        void displayName(){
            cout << "Name : " << fName << " " << lName;
        }

        void setName(string fName, string lName){
            this->fName = fName;
            this->lName = lName;
        }

        void display(){
            cout << handle << " has guessed : " << guess << endl;
        }
};



int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    // Problem Statement : Build a mp guess game,
    // Game decides a random number between 1-10,
    // each player has to make a random guess between 1-10
    // correct guess wins!

    //Player knows : fname,sname,handle,guess
    //Player can : makeGuess(), changeHandle()

    Player p1;
    p1.setName("Pratim","Majumder");
    p1.displayName();

    return 0;
}

