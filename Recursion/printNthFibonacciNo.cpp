#include <iostream>
using namespace std;

int fibo(int n)
{
    // if (n == 1)
    // {
    //     return 1;
    // }
    // if (n == 0)
    // {
    //     return 0;
    // }

    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    cout << fibo(10) << endl;

    return 0;
}