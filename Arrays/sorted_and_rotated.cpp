#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int breakCount = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            breakCount++;
        }
    }

    if (nums[n - 1] > nums[0])
        breakCount++;

    if (breakCount <= 1)
        return true;
    else
        return false;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    cout << check(nums);
}