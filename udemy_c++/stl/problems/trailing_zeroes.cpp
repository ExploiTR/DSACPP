#include "../../header.h"
using namespace std;

/*
 * Trailing Zeroes in N!
 * Given an integer n, return the number of trailing zeroes in n!.
 *
 * Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.
 *
 * Example 1.
 *
 * Input: n = 3
 * Output: 0
 *
 * Explanation: 3! = 6, no trailing zeroes.
 *
 * Example 2.
 *
 * Input: n = 5
 * Output: 1
 *
 * Explanation: 5! = 120, 1 trailing zero.
 *
 * Constraints: 0 <= num <= 10^4
 *
 * Follow-up: Could you write a solution that works in logarithmic time complexity?
 *
 */

int noOfTrailingZeroesInFactorial(int num)
{
    if (num < 5)
        return 0;

    int x = 1;
    int numOfZeroes = 0;
    int cPow;
    while (num / (cPow = pow(5, x++)) > 0)
    {
        numOfZeroes += (num / cPow);
    }

    return numOfZeroes;
}

int main()
{
    iosetup();

    int num;

    cin >> num;

    cout << noOfTrailingZeroesInFactorial(num);

    return 0;
}