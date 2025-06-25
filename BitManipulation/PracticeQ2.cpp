#include <iostream>
using namespace std;

void clearLastIthBit(int num, int i)
{
    int bitMask = (~0) << i;

    num = num & bitMask; // clear last ith bit

    cout << num << endl;
}

int main()
{
    clearLastIthBit(15, 2);

    return 0;
}