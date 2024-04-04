#include "../header.h"

/*
 *   Base Condition
 *   Recursion Tree
 *
 */

void printi21(int i, int n)
{
    if (i > n)
        return;
    printi21(i + 1, n);
    cout << i << endl; //<- last guy executed first
}

void parameterized_sumOfN(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    parameterized_sumOfN(n - 1, sum + n);
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

void reverse_arr(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverse_arr(arr, l + 1, r - 1);
}

bool isPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isPalindrome(i + 1, s);
}

int i = 0;
bool isPalindrome(string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return isPalindrome(i + 1, s);
}

int print_fib(int n)
{
    if (n <= 1)
        return n;
    cout << n << endl;
    return print_fib(n - 1) + print_fib(n - 2);
}

int main()
{
    iosetup();

    // printi21(1, 3);
    // parameterized_sumOfN(3, 0);

    // cout << factorial(5) << endl;

    // int ax[] = {3, 5, 6, 1};
    // reverse_arr(ax, 0, 3);

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << ax[i] << " ";
    // }

    // string z = "racecar";
    // cout << isPalindrome(z);

    cout << print_fib(5);

    return 0;
}