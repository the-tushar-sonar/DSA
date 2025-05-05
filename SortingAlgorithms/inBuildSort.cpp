#include <iostream>
#include <algorithm>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    // Time Complexity --> O(nlogn)  

    // Ascending Order
    sort(arr, arr + 8); // sort(start,end)
    print(arr, 8);

    // Descending Order  
    sort(arr, arr + 8, greater<int>()); // sort(start,end,greater<int>())

    print(arr, 8);
    return 0;
}