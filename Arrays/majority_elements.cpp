#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    // Better Approach
    // sort(nums.begin(), nums.end());

    // return nums[n / 2];

    /*
    int low = 0, high = n - 1;
    int mid = low + (high - low) / 2;

    if (nums[mid] == nums[low])
    {
        return nums[low];
    }
    else if (nums[mid] != nums[low])
    {
        return nums[mid];
    }
    return -1;
    */

    // Optimal Approach

    int candi = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            candi = nums[i];

        if (nums[i] == candi)
            count++;
        else
            count--;
    }
    return candi;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);
}