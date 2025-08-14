#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> &arr, int i, int target)
{
    // base case
    if (i == arr.size())
    {
        return -1;
    }

    // check if current element is equal to target
    if (arr[i] == target)
    {
        return i;
    }

    // recursive call
    return firstOccur(arr, i + 1, target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << firstOccur(arr, 0, 3) << endl;

    return 0;
}