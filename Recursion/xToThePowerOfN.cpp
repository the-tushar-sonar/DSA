#include <iostream>
using namespace std;

int powB(int x, int n) // Brute Force
{
    if (n == 0)
        return 1;

    if (n == 1)
        return x;

    return x * powB(x, n - 1);
}

int powO(int x, int n) // Optimized
{
    if (n == 0)
        return 1;

    int halfPow = powO(x, n / 2);
    int halfPowSquare = halfPow * halfPow;
    if (n % 2 != 0)
    {
        // If n is odd, multiply by x
        return x * halfPowSquare;
    }
    return halfPowSquare;
}

int main()
{
    // cout << powB(2, 10);
    cout << powO(2, 10);

    return 0;
}