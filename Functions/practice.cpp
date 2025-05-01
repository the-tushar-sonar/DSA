#include <iostream>
using namespace std;

// Find product of two numbers
int prod(int a, int b)
{
    return a * b;
}

// Find the number is Even or Not
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Find the Factorial of number
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// Find the number is Prime or Not
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Find the number is Prime or Not <--- Optimized
bool isPrimeO(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Find the Binomial Coefficient (i.e. probability, n -> total items & r -> no. items to be selected)
int binCoeff(int n, int r)
{
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n - r);

    int result = val1 / (val2 * val3);
    return result;
}

int main()
{
    // cout << prod(8,5);
    // cout << isEven(40);
    // cout << factorial(6);
    // cout << isPrimeO(9);
    cout << binCoeff(3, 2);

    return 0;
}