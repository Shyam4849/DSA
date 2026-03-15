#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + nums[j];
            if (sum > maxSum)
            maxSum = sum;
        }
    }
    return maxSum;
    */

    // Optimal Approach
    int n = nums.size();
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];

        maxSum = max(currentSum, maxSum);

        if (currentSum < 0)
            currentSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);
}