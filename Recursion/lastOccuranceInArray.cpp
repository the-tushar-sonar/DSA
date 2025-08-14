#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> &arr, int i, int target)
{
    // base case
    if (i == arr.size())
    {
        return -1;
    }

    // recursive call
    int idxFound = lastOccur(arr, i + 1, target);

    // check if current element is equal to target
    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }
    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << lastOccur(arr, 0, 3) << endl; // Output: 4 (last occurrence of 3)

    return 0;
}