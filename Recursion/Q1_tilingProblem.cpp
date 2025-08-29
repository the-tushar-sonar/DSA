#include <iostream>
using namespace std;

int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // int ans1 = tilingProblem(n - 1); // vertical
    // int ans2 = tilingProblem(n - 2); // horizontal

    // return ans1 + ans2;

    return tilingProblem(n - 1) + tilingProblem(n - 2);
}

int main()
{
    int n = 5;
    cout << tilingProblem(n);
    return 0;
}