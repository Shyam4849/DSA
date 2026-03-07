#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    // Better Approach
    /*
    unordered_map<int, int> mpp;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;

        if (mpp[nums[i]] > 1)
        {
            return true;
        }
    }
    return false;
    */

    // Optimal Approach
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    bool isDuplicate = containsDuplicate(nums);
    if (isDuplicate)
    {
        cout << "Contains Duplicate elements!!";
    }
    else
    {
        cout << "Does not Contains Duplicate elements!!";
    }
}