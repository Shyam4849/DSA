#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    int result = nums[0];

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = i; j < n; j++)
        {
            prod = prod * nums[j];
            result = max(result, prod);
        }
    }
    return result;
    */

    // Optimal Approach
    int n = nums.size();

    if (n == 0)
        return 0;

    int global_max = nums[0];
    int curr_max = nums[0];
    int curr_min = nums[0];

    for (int i = 1; i < n; i++)
    {
        int curr_num = nums[i];

        if (curr_num < 0)
            swap(curr_max, curr_min);

        int temp_max = max(curr_num, curr_num * curr_max);
        curr_min = min(curr_num, curr_num * curr_min);

        curr_max = temp_max;

        global_max = max(global_max, curr_max);
    }
    return global_max;
}

int main()
{
    vector<int> nums = {-2};

    cout << maxProduct(nums);
}