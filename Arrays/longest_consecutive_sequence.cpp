#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    // Better Approach
    int n = nums.size();

    if (n == 0)
        return 0;

    sort(nums.begin(), nums.end());
    // 0 0 1 2 3 4 5 6 7 8
    int count = 1;
    int largest = 1;
    for (int i = 1; i < n; i++)
    {
        // for (int j = 1; j < n; j++)
        // {
        //     if (nums[j] == nums[i] + 1)
        //         count++;
        // }

        if (nums[i] == nums[i - 1] + 1)
            count++;
        else if (nums[i] == nums[i - 1])
            continue;
        else
            count = 1;

        largest = max(largest, count);
    }
    return largest;
}

int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << longestConsecutive(nums);
}