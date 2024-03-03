#include "../../header.h"
using namespace std;

/*
 *
 * Fibonacci series 2
 * Implement a function that takes an integer n as argument and returns the nth term of the recurrence relation given below.
 *
 * Recurrence relation, F[n] = F[n-1] + F[n-2] + F[n-3]; F[0] = 1, F[1] = 1, F[2] = 1
 *
 * Sample Input
 *
 * 3
 * 4
 *
 * Sample Output
 *
 * for test case one, F[3] = F[0] + F[1] + F[2] = 1 + 1 + 1 = 3,
 * for test case two, F[4] = F[3] + F[2] + F[1] = 1 + 1 + 3 = 5
 *
 */

int fibonacciSeries(int n)
{
    if (n <= 2)
        return 1;
    else
        return fibonacciSeries(n - 1) + fibonacciSeries(n - 2) + fibonacciSeries(n - 3);
}

int main()
{
    iosetup();

    int num;

    cin >> num;

    cout << fibonacciSeries(num);

    return 0;
}