#include <iostream>
using namespace std;
/*
Question 3 : Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer.

Note - This Qs might feel difficult as a beginner because it uses DP approach.

Examples :
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Input: intervals =nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/
int maxProduct(int nums[], int n)
{
    if (n == 0)
        return 0;

    // Initialize three variables:
    int maxSoFar = nums[0];
    int minSoFar = nums[0];
    int result = nums[0];

    // Loop through the array starting from the 2nd element
    for (int i = 1; i < n; i++)
    {
        int curr = nums[i];

        // Save current max in temp variable (since we'll change it)
        int tempMax = maxSoFar;

        // Update max_product_so_far:
        // The current number can be:
        // - itself (start a new subarray)
        // - multiplied with previous max (continue the positive streak)
        // - multiplied with previous min (if current is negative)
        maxSoFar = max(curr, curr * maxSoFar, curr * minSoFar);

        // Update min_product_so_far (important for negatives):
        minSoFar = min(curr, curr * tempMax, curr * minSoFar);

        // Update the result if we found a new maximum
        result = max(result, maxSoFar);
    }
    return result;
}

int main()
{
    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Maximum product subarray: " << maxProduct(nums, n) << endl;

    return 0;
}