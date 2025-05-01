#include <iostream>
using namespace std;

int rev(int n)
{
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}
bool isPalindrom(int n)
{

    if (rev(n) == n)
    {
        return true;
    }
    return false;
}

int main()
{

    // cout << rev(142);
    cout << isPalindrom(121);

    return 0;
}
/*
rev=0
digit=num%10
rev=rev*10+digit
num=num/10
*/