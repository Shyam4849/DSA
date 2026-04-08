#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &nums)
{
    // Brute Force
    int n = nums.size();
    int maxlength = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == 0)
                maxlength = max(maxlength, j - i + 1);
        }
    }
    return maxlength;
}

int main()
{
    vector<int> nums = {5, -5, 0, 0, 0, 3, 4, 5};
    cout << maxLen(nums);
}