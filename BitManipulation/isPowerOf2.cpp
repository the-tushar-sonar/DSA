#include <iostream>
using namespace std;

int isPowerOf2(int num) // using Bit masks
{
    if (!(num & num - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << isPowerOf2(6) << endl;
    cout << isPowerOf2(4) << endl;
    cout << isPowerOf2(64) << endl;
    cout << isPowerOf2(20) << endl;

    return 0;
}