#include <iostream>
using namespace std;

int maxArea(int arr[], int n)  // Brute Force O(n^2)
{
    int maxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int ht = min(arr[i], arr[j]);
            int currentWater = w * ht;

            maxWater = max(maxWater, currentWater);
        }
    }
    return maxWater;
}

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << maxArea(arr, n);

    return 0;
}