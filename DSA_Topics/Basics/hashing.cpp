#include "../header.h"

void testIntHash()
{
    int size;
    cin >> size;

    int *numArray = new int[size]();
    int *hashArray = new int[size + 1]();

    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        numArray[i] = temp;
        hashArray[temp] += 1;
    }

    int sNum;
    cin >> sNum;
    cout << hashArray[sNum];
}

void testCharHash()
{
    int char_hash[26] = {0};

    string str;
    getline(cin, str);

    for (auto ch : str)
        char_hash[ch - 'a'] += 1;

    char cur;
    cin >> cur;
    cout << char_hash[cur - 'a'] << endl;
    cin >> cur;
    cout << char_hash[cur - 'a'] << endl;
    cin >> cur;
    cout << char_hash[cur - 'a'] << endl;
}

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> nn(n, 0);

    for (int i : nums)
        if (i < n)
            nn[i - 1]++;

    return nn;
}

int main()
{
    iosetup();

    // precalculate + prestore -> fetching : basic hashing

    // has array is also cause frequency array

    // testIntHash();
    // testCharHash();

    // for(int i = 0; i < n; i++){
    //     cout << r2[n] << endl;
    // }

    int n;
    cin >> n;

    int temp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    return 0;
}