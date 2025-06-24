#include <iostream>
using namespace std;

int clearIthBit(int num, int i) // using Bit masks
{
    int bitMask = ~(1 << i);
    return num & bitMask;
}

int main()
{
    cout << clearIthBit(6, 1) << endl;

    return 0;
}