#include "../../header.h"
using namespace std;

/*
 *
 * Prime numbers.
 * Given a number n.
 *
 * Implement a function that takes a number n and returns an array containing all primes upto n.
 *
 * Sample Input
 *
 * 8
 * 15
 *
 * Sample Output
 *
 * 2 3 5 7
 * 2 3 5 7 11 13
 *
 * Explanation :
 *
 * for test case one, 2 3 5 7 are prime numbers upto 8.
 *
 * Similarly, for test case two, 2 3 5 7 11 13 are prime numbers upto 15.
 *
 */
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<int> printPrimes(int n)
{
    vector<int> primes;

    int i = 2;
    while (i <= n)
    {
        if (isPrime(i))
            primes.push_back(i);
        ++i;
    }

    return primes;
}

// Sieve of Eratosthenes
// void printPrimesEff(int n)
// {
//     std::vector<bool> isPrime(n + 1, true); // Step 1: Create boolean array
//     for (int p = 2; p * p <= n; p++)
//     { // Step 5: Iterate till square root of n
//         if (isPrime[p])
//         { // Step 4: If p is prime
//             for (int i = p * p; i <= n; i += p)
//             { // Step 3: Mark multiples of p
//                 isPrime[i] = false;
//             }
//         }
//     }
//     // Step 6: Print prime numbers
//     std::cout << "Prime numbers up to " << n << " are:\n";
//     for (int i = 2; i <= n; ++i)
//     {
//         if (isPrime[i])
//         {
//             std::cout << i << " ";
//         }
//     }
// }

int main()
{
    iosetup();

    int fst;
    cin >> fst;

    vector<int> res = printPrimes(fst);
    for (int i = 0; i < res.size(); ++i)
    {
        std::cout << res[i] << " ";
    }

    return 0;
}