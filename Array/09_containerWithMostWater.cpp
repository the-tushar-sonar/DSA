#include <iostream>
using namespace std;

// leetcode: https://leetcode.com/problems/container-with-most-water/

int maxArea(int arr[], int n) // Brute Force O(n^2)
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

int maxAreaO(int arr[], int n) // Two Pointer O(n)
{
    int lb = 0, rb = n - 1, maxWater = 0;

    while (lb < rb)
    {
        int w = rb - lb;
        int ht = min(arr[rb], arr[lb]);
        int currentWater = w * ht;
        maxWater = max(maxWater, currentWater);

        arr[lb] < arr[rb] ? lb++ : rb--;
    }

    return maxWater;
}

int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << maxAreaO(arr, n);

    return 0;
}