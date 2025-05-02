#include <iostream>
using namespace std;

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}

int binarySearch(int arr[], int n, int key)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    cout << endl;

    int key = 8;

    int search = binarySearch(arr, size, key);
    cout << "Key is at index : " << search;

    return 0;
}