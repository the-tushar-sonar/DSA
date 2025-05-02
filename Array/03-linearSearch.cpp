#include <iostream>
using namespace std;

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}

int linearSearch(int *ptr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == ptr[i])
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 9, 2, 3, 4, 5, 55, 6, 7, 8, 9, 8, 7, 1};
    int size = sizeof(arr) / sizeof(int);

    // cout << size << endl;

    printArray(arr, size);
    cout << endl;

    int key = 56;

    cout << "The key is at index : " << linearSearch(arr, size, key);

    return 0;
}