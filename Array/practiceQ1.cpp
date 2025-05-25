#include <iostream>
#include <algorithm>
using namespace std;
/*
Question 1 : Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct. [link]
Examples :
Input: nums = [1,2,3,4]
Output: false
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
// Brute Force Method
bool isDuplicate(int *arr, int n) // Time Complexity: O(n^2)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "true";
                return true;
            }
        }
    }
    cout << "false";
    return false;
}

// Sort & Compare Method
bool isDuplicateO(int arr[], int n) // Time Complexity: O(n log n)
{
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cout << "true";
            return true;
        }
    }
    cout << "false";
    return false;
}
// Using Hash Method  // to be learned
bool isDuplicateH(int arr[], int n) // Time Complexity: O(n)
{
    
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    // int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    isDuplicateO(arr, n);

    return 0;
}