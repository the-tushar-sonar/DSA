#include <iostream>
using namespace std;

int setIthBit(int num, int i) // using Bit masks
{
    int bitMask = 1 << i;
    return (num | bitMask);
}

int main()
{
    cout << setIthBit(6, 3) << endl;

    return 0;
}