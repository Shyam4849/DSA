#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k)
{
    // Brute Force
    sort(nums.begin(), nums.end());
    int maxFreq = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        long long cost = 0;
        int count = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            cost += nums[i] - nums[j];
            if (cost > k)
                break;
            count++;
        }
        maxFreq = max(maxFreq, count);
    }
    return maxFreq;
}

int main()
{
    vector<int> nums = {1, 2, 4}; // {1,3,8,13} k = 5
    int k = 5;

    cout << maxFrequency(nums, k);
}