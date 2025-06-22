#include <iostream>
using namespace std;

int getIthBit(int num, int i) // using Bit masks
{
    int bitMask = 1 << i;

    if (!(num & bitMask))
    {
        // cout << "0\n";
        return 0;
    }
    else
    {
        // cout << "1\n";
        return 1;
    }
}

int main()
{
    getIthBit(6, 2);
    getIthBit(7, 5);

    return 0;
}