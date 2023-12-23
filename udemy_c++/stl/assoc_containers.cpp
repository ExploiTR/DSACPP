#include "../header.h"

int main()
{
    iosetup();

    /*
     Associative containers :

     Advantage - Ordering : Set - Sorted, Unique (implements Balanced BST inside - logN)
     Advantage - Ordering : map - (implements Self balancing BST - logN)

     Advantage - Ordering : Multiset >> Like set but allows duplicate key
     Advantage - Ordering : Multimap >> Like map but allows duplicate pair

     Advantage - Speed : Unordered set - Unsorted
     Advantage - Speed : Unordered Map - (implements HashTable - O(1))

     Advantage - Speed : Unordered Multiset
     Advantage - Speed : Unordered Multimap
    */

    set<int> s = {1, 4, 76, 3};
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    s.insert(1); //O(longn) - all, if unorder-> then O(1) all.
    s.erase(3);

    //s.find

    unordered_map<string,int> menu;
    menu["coke"] = 50;

    cout << menu["coke"] << endl;

    unordered_multimap<string,int> menu2;
    menu2.emplace("meow",1);
    menu2.emplace("meow",2);
    auto it = menu2.find("meow");
    cout << (*it).second << endl;
    it++;
    cout << (*it).second << endl; //weird af

    return 0;
}