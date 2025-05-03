#include <iostream>
#include <climits>
using namespace std;

void maxSubArraySum1(int *arr, int n) // Brute Force Method -->  O(n^3)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "The maximum sub array sum is " << maxSum;
}

void maxSubArraySum2(int *arr, int n) // Optimized Method -->  O(n^2)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "The maximum sub array sum is " << maxSum;
}

void maxSubArraySum3(int *arr, int n) // Kadane's Algorithm --> O(n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "The maximum sub array sum is " << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    // maxSubArraySum1(arr, n);
    // maxSubArraySum2(arr, n);
    maxSubArraySum3(arr, n);

    return 0;
}