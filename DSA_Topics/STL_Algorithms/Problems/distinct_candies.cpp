#include "../../header.h"
using namespace std;

/*
 * Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.
 *
 * The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the
 * maximum number of different types of candies while still following the doctor's advice.
 *
 * Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.
 *
 * Constraints:
 *
 * n == candyType.length
 *
 * 2 <= n <= 10^4
 *
 * n is even.
 *
 * -10^5 <= candyType[i] <= 10^5
 *
 * Example:
 *
 * Input: candyType = [1,1,2,2,3,3]
 *
 * Output: 3
 *
 * Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.
 */

int distributeCandies(vector<int> candies)
{
    return candies.size() / 2;
}

int main()
{
    iosetup();

    int k, x;

    cin >> k;
    cin >> x;

    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int ct_x = distributeCandies(candyType);
    cout << ct_x << endl;

    return 0;
}