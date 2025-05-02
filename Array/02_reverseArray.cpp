#include <iostream>
using namespace std;

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
}

int reverseArr(int arr[], int n) // with extra space
{

    int rev[n] = {};

    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        rev[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = rev[i];
    }

    return 0;
}

int reverseArrO(int arr[], int n) // without extra space
{
    int st = 0, end = n - 1;

    for (int i = 0; i < n; i++)
    {
        while (st <= end)
        {
            // swap(arr[st], arr[end]); // inbuild function in c++

            // Swapping Logic
            int temp;
            temp = arr[st];
            arr[st] = arr[end];
            arr[end] = temp;

            st++;
            end--;
        }
    }

    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    cout << endl;

    reverseArrO(arr, n);
    cout << "Reverse of array is : " << endl;
    printArray(arr, n);

    return 0;
}