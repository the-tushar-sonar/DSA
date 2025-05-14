#include <iostream>
#include <cstring>
using namespace std;

//  Leetcode : 125

bool isPalindrome(char word[], int n) // O(n)
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        if (word[st++] != word[end--])
        {
            cout << " Not a Valid Palindrome";
            return false;
        }
    }

    cout << "Valid Palindrome";
    return true;
}

int main()
{
    char word[] = "madam";

    isPalindrome(word, strlen(word));

    return 0;
}