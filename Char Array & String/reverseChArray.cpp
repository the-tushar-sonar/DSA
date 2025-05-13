#include <iostream>
#include <cstring>
using namespace std;

void reverse(char word[], int n) // O(n)
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        swap(word[st++], word[end--]);
    }
}

int main()
{
    char word[] = "hello";
    reverse(word, strlen(word));
    cout << word << endl;

    return 0;
}