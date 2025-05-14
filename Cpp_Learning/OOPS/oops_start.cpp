#include <iostream>
#include <string>
// #include <gmp.h>
using namespace std;


class Player{

    private:
        const string fName; //constant member
        const string lName;
        string handle;
        int * checkPtr;

    public:
        Player(){
        }

        //Shallow copy constructor -
        // Player(Player &p) : fName(p.fName), lName(p.lName) {
        //     this->handle = p.handle;
        //     this->checkPtr = p.checkPtr;
        // }

        //Deep copy constructor -
        Player(Player &p) : fName(p.fName), lName(p.lName) {
            this->handle = p.handle;
            this->checkPtr = new int[1];
            this->checkPtr[0] = 0; //avoid garbage value
        }

        //dealing with constant members 
        Player(string f_name, string l_name, string handle) : fName(f_name), lName(l_name) {
            checkPtr = new int[1];
            this->handle = handle;
        }

        void displayName() const{
            cout << "Name : " << fName << " " << lName << endl;
        }

        void setHandle(string handle){ 
            this->handle = handle;
        }

        string getHandle() const{
            return this->handle;
        }

        void makeGuess(){
            checkPtr[0] = rand()%10;
        }

        void display() const{
            cout << handle << " has guessed : " << checkPtr[0] << endl;
        }

        //operator overloading || copy assignment operator
        void operator=(Player &p){
            //const operators cant be copied!
        }

        //Desh-truhct-teurh
        ~Player(){
            if(checkPtr != NULL)
                delete [] checkPtr;
            cout << "Destroying : " << handle << endl;
        }
};


int main(){
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\input.txt","r",stdin);
    freopen("C:\\Users\\prati\\OneDrive\\Documents\\GitHub\\DSA_Udemy\\udemy_c++\\output.txt","w",stdout);

    // Problem Statement : Build a mp guess game,
    // Game decides a random number between 1-10,
    // each player has to make a random guess between 1-10
    // correct guess wins!

    // Player knows : fname,sname,handle,guess
    // Player can : makeGuess(), changeHandle()

    Player p1("Pratim","Majumder", "pm1");
    Player p2(p1); //Default copy const : C++ feature.

    p1.makeGuess();
    p2.makeGuess();

    p1.display();
    p2.display();

    //this -> : this is a pointer to current obj, so we can try below

    Player * p3 = new Player("E","C", "ecx");
    p3-> makeGuess();
    p3 -> display();

    // no destrcutor called for dynamically allocated objetcs on heap unless calle delete

    delete p3;

    return 0;
}

