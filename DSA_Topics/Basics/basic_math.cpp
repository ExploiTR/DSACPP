#include "../header.h"

int countDigits(int n)
{
    int nx = n;
    int totalDig = 0;
    int dig = 0;
    while (nx > 0)
    {
        dig = nx % 10;
        nx = nx / 10;

        if (dig != 0 && n % dig == 0)
            totalDig++;
    }
    return totalDig;
}

int reverse(int x)
{
    int max_limit = (pow(2, 31) - 1);
    int temp = abs(x);
    int new_int = 0;
    while (temp > 0)
    {
        if (new_int > max_limit)
            return 0;
        new_int *= 10;
        new_int += temp % 10;
        temp /= 10;
    }

    return x > 0 ? new_int : -1 * new_int;
}

bool checkArmstrong(int n)
{
    int xn = n;
    int dup = 0;
    int dig = log10(n) + 1;
    while (xn > 0)
    {
        dup += pow(xn % 10, dig);
        xn = xn / 10;
    }

    return dup == n;
}

int sumOfAllDivisors_s(int n)
{
    int sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum;
}

int sumOfAllDivisors(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += sumOfAllDivisors_s(i);
    }
    return sum;
}

int sumOfAllDivisorsX(int n){
    // Write your code here.    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (n / i) * i;
    }
    return sum;
}

int main()
{
    iosetup();

    // LOL

    int test;
    cin >> test;
    cout << sumOfAllDivisors(test) << " : " << sumOfAllDivisorsX(test) << endl;
    return 0;
}