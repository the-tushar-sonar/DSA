#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n) // Time Complexity --> O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])   // '>' for ascending order and '<' for descending order
            {
                // swap the elements
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            if (!isSwap)  // if no two elements were swapped by inner loop, then break
            {
                cout << "Array is sorted" << endl;
                return;
            }
        }
    }
    print(arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    return 0;
}