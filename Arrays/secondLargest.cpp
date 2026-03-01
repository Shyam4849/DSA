#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &nums)
{
    // Brute Force
    /*
    sort(nums.begin(), nums.end());

    return nums[nums.size() - 2];
    */

    // Better Approach
    /*
    int large = INT_MIN, secondLarge = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        large = max(large, nums[i]);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > secondLarge && nums[i] != large)
        {
            secondLarge = nums[i];
        }
    }
    return secondLarge;
    */

    // Optimal Approach
    int large = INT_MIN, secondLarge = INT_MIN;
    // 5,1,2
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > large)
        {
            secondLarge = large;
            large = nums[i];
        }

        if (nums[i] > secondLarge && nums[i] != large)
        {
            secondLarge = nums[i];
        }
    }
    return secondLarge;
}

int main()
{
    vector<int> nums = {5, 1, 2};

    cout << secondLargest(nums);
}