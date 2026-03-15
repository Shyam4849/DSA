#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();

    // Brute Force
    /*
            int maxProfit = 0;

            for (int i = 0; i < prices.size(); i++) {
                for (int j = i + 1; j < prices.size(); j++) {
                    int profit = prices[j] - prices[i];
                    maxProfit = max(maxProfit, profit);
                }
            }
            return maxProfit;
    */

    // Optimal Approach
    int minPrice = INT_MAX;
    int maxProfit = 0;
    // for (int price = 0; price < n; price++)
    // {
    //     if (price < minPrice)
    //         minPrice = price;
    //     else
    //     {
    //         price -= minPrice;
    //         maxProfit = max(maxProfit, price);
    //     }
    for (int price : prices)
    {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}