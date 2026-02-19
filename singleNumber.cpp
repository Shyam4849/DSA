#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    /*
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i += 2)
    {
        if (nums[i] != nums[i + 1])
        return nums[i];
    }
    return nums[nums.size() - 1];
    */

    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        result = result ^ nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};

    int result = singleNumber(nums);
    cout << result;
}