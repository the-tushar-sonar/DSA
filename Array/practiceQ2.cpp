#include <iostream>
using namespace std;
/*
Question 2 : There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Examples :
Input: nums = [4,5,6,7,0,1,2], target = 0 Output:4
Input: nums = [4,5,6,7,0,1,2], target = 3 Output:-1

link : https://leetcode.com/problems/search-in-rotated-sorted-array

*/
int searchB(int arr[], int n, int key)
{
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        // left half is sorted
        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= key <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        // right half is sorted
        else
        {
            if (arr[mid] <= key <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << searchB(arr, n, 4);

    return 0;
}