#include "../../header.h"
using namespace std;

/*
 *
 * Valid Anagram
 * Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 *
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 * Example 1:
 *
 * Input: s = "anagram", t = "nagaram"
 *
 * Output: true
 *
 * Example 2:
 *
 * Input: s = "rat", t = "car"
 *
 * Output: false
 *
 */

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_set<char> map;
    for (auto pchar : s)
        map.emplace(pchar);

    for (auto schar : t)
        map.erase(schar);

    return map.size() == 0;
}

int main()
{
    iosetup();

    string fst;
    string snd;

    cin >> fst;
    cin >> snd;

    cout << (isAnagram(fst, snd) ? "True" : "False") << endl;

    return 0;
}