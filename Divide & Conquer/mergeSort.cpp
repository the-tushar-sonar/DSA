#include <iostream>
#include <vector>
using namespace std;

// Merges two sorted parts of arr[] into one sorted part
void merge(int arr[], int stIdx, int endIdx, int mid)
{
    vector<int> temp; // Temporary vector for merged elements
    int i = stIdx;    // Pointer for left part
    int j = mid + 1;  // Pointer for right part

    // Merge elements from both parts in sorted order
    while (i <= mid && j <= endIdx)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    // Add remaining elements from left part
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    // Add remaining elements from right part
    while (j <= endIdx)
    {
        temp.push_back(arr[j++]);
    }

    // Copy merged elements back to original array
    for (int idx = stIdx, x = 0; idx <= endIdx; idx++)
    {
        arr[idx] = temp[x++];
    }
}

// Recursively sorts the array using merge sort
void mergeSort(int arr[], int stIdx, int endIdx)
{
    if (stIdx >= endIdx) // Base case: one or zero elements
    {
        return;
    }

    int mid = stIdx + (endIdx - stIdx) / 2; // Find middle index

    mergeSort(arr, stIdx, mid);      // Sort left half
    mergeSort(arr, mid + 1, endIdx); // Sort right half

    merge(arr, stIdx, endIdx, mid); // Merge sorted halves
}

// Prints the array elements
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function: runs the program
int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4}; // Initialize array
    int n = 6;

    mergeSort(arr, 0, n - 1); // Sort array
    printArr(arr, n);         // Print sorted array

    return 0;
}