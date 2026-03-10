#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &nums)
{
    int n = nums.size();
    int arrSum = 0;

    for (int i = 0; i < n; i++)
    {
        arrSum += nums[i];
    }

    int realN = n + 1;
    int sum = (realN * (realN + 1)) / 2;

    return sum - arrSum;
}

int main()
{
    vector<int> nums = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNum(nums);
}