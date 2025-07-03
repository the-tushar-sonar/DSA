#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0) // Base case: if n is 0, stop the recursion
    {
        return;
    }
    cout << n << " "; // Print the current number
    print(n - 1); // Recursive call with n-1
}

int main()
{
    print(10000);

    return 0;
}