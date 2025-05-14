#include "../../header.h"
using namespace std;

/*
 * Student Rankings
 * Your task is to write a program that sorts the programmers in decreasing order of the number of problems solved. If two or more programmers solved the same number of problems, they should be sorted in increasing order of the time taken to solve the problems.
 *
 * The mainFn() function should create a vector of pairs, where each pair contains the number of problems solved and the time taken by a programmer. After sorting, it should print the sorted vector to the console. Each pair should be printed on a new line.
 *
 * Note: Use lambda functions
 *
 * Input format:
 *
 * The first line of input contains two integers, n (1 ≤ n ≤ 10^5), representing the number of programmers.
 * Each of the next n lines contains two integers, p and t (1 ≤ t ≤ 10^9, 0 ≤ p ≤ 10^9), representing the time taken by a programmer and the number of problems solved, respectively.
 *
 * Output:
 *
 * Print a single line containing the indices of the top k students, separated by spaces.
 *
 * Input
 *
 * 4
 * 5 100
 * 5 90
 * 6 120
 * 4 60
 *
 * Output:
 * 6 120
 * 5 90
 * 5 100
 * 4 60
 */

void mainFn()
{
    int probs;
    int timetk;

    int totalNumOfP;
    cin >> totalNumOfP;

    vector<pair<int, int>> pairs;

    for (int i = 0; i < totalNumOfP; i++)
    {
        cin >> probs;
        cin >> timetk;

        pairs.push_back(make_pair(probs, timetk));
    }

    sort(pairs.begin(), pairs.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.first == b.first)
            return a.second < b.second;        
        else
            return a.first > b.first; });

    for (auto par : pairs)
    {
        cout << par.first << " " << par.second << endl;
    }
}

int main()
{
    iosetup();

    mainFn();

    return 0;
}