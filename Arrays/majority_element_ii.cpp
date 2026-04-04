#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    // Brute Force
    /*
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            count++;
        }
        if (count > nums.size() / 3 && find(result.begin(), result.end(), nums[i]) == result.end())
        result.push_back(nums[i]);
    }
    return result;
    */

    // Better Approach
    /*
    unordered_map<int, int> mpp;
    vector<int> result;

    // Precomputing
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto &val : mpp)
    {
        if (val.second > nums.size() / 3)
        {
            result.push_back(val.first);
        }
    }
    sort(result.begin(), result.end());
    return result;
    */

    // Optimal Approach
    int candidate1 = 0, candidate2 = 0;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate1)
        {
            count1++;
        }
        else if (nums[i] == candidate2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            candidate1 = nums[i];
            count1++;
        }
        else if (count2 == 0)
        {
            candidate2 = nums[i];
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    vector<int> result;

    // Verification
    int countV1 = 0, countV2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate1)
        {
            countV1++;
        }
        else if (nums[i] == candidate2)
        {
            countV2++;
        }
    }

    if (countV1 > nums.size() / 3)
    {
        result.push_back(candidate1);
    }
    if (countV2 > nums.size() / 3)
    {
        result.push_back(candidate2);
    }
    return result;
}

int main()
{
    vector<int> nums = {3, 1, 3, 1, 2};
    vector<int> result = majorityElement(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}