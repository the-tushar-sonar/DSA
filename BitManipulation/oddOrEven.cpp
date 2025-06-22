#include <iostream>
using namespace std;

void oddOrEven(int num) // using Bit masks
{
    if (!(num & 1))
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD\n";
    }
}

int main()
{
    oddOrEven(5);
    oddOrEven(20);

    return 0;
}