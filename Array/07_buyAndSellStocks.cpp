#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void maxProfit(int *prices, int n) // O(n+n) = O(2n) = O(n)
{
    int bestBuy[10000];
    bestBuy[0] = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Max Profit is " << maxProfit << endl;
}

// link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock
int maxProfitO(vector<int> &prices)  // More optimized solution with vector
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices)
    {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

int main()
{
    // int prices[] = {7, 1, 5, 3, 6, 4};
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    cout << maxProfitO(prices) << endl;

    return 0;
}