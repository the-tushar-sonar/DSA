#include <iostream>
using namespace std;

int countSetBits(int num)
{
    int count = 0;

    while (num > 0)
    {
        int lastDigt = num & 1;
        count += lastDigt;

        num = num >> 1;
    }
    cout << count << endl;
    return count;
}

int main()
{
    countSetBits(15);

    return 0;
}