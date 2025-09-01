#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int stIdx, int endIdx, int mid)
{
    vector<int> temp;
    int i = stIdx;
    int j = mid + 1;

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

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= endIdx)
    {
        temp.push_back(arr[j++]);
    }

    for (int idx = stIdx, x = 0; idx <= endIdx; idx++)
    {
        arr[idx] = temp[x++];
    }

    return;
}

void mergeSort(int arr[], int stIdx, int endIdx)
{
    if (stIdx >= endIdx)
    {
        return;
    }

    int mid = stIdx + (endIdx - stIdx) / 2;

    mergeSort(arr, stIdx, mid);
    mergeSort(arr, mid + 1, endIdx);

    merge(arr, stIdx, endIdx, mid);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}