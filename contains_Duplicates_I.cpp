#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
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
}

int main()
{
    vector<int> nums = {9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 0};

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