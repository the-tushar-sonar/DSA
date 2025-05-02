#include <iostream>
using namespace std;

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}

int largest(int *ptr, int n)
{
    int max = ptr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < ptr[i])
        {
            max = ptr[i];
            // cout << "max is is updated to " << ptr[i] << endl;
        }
    }

    return max;
}

int smallest(int *ptr, int n)
{
    int small = ptr[0];

    for (int i = 0; i < n; i++)
    {
        if (small > ptr[i])
        {
            small = ptr[i];
            // cout << "small is updated to " << ptr[i] << endl;
        }
    }

    return small;
}

int main()
{
    int arr[] = {10, 9, 2, 3, 4, 5, 55, 6, 7, 8, 9, 8, 7, 1};
    int size = sizeof(arr) / sizeof(int);

    // cout << size << endl;

    printArray(arr, size);
    cout << endl;

    int largeNo = largest(arr, size);
    cout << "Largest no in array is " << largeNo << endl;

    int smallNo = smallest(arr, size);
    cout << "Smallest no in array is " << smallNo << endl;
    return 0;
}