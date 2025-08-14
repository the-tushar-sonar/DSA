#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }

    // check if current element is greater than next element
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    // recursive call
    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}; // sorted : 1
    int arr2[5] = {1, 2, 4, 3, 5}; // unsorted : 0

    cout << isSorted(arr1, 5, 0); // 1
    cout << isSorted(arr2, 5, 0); // 0

    return 0;
}