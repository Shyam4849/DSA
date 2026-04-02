#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    // Brute Force
    /*
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int m = i; m <= j; m++)
            {
                sum += nums[m];
            }
            if (sum == k)
            count++;
        }
    }
    return count;
    */

    // Better Approach
    /*
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == k)
            count++;
        }
    }
    return count;
    */

    // Optimal Approach
    int n = nums.size();
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        preSum += nums[i];
        int remove = preSum - k;

        count += mpp[remove];
        mpp[preSum] += 1;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;

    cout << subarraySum(nums, k);
}