#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
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
}

int main()
{
    vector<int> nums = {-2};

    cout << maxProduct(nums);
}