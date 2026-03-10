#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &nums)
{
    // Method 1 -> chances of overflow
    /*
    int n = nums.size();
    int arrSum = 0;

    for (int i = 0; i < n; i++)
    {
        arrSum += nums[i];
    }

    int realN = n + 1;
    int sum = (realN * (realN + 1)) / 2;

    return sum - arrSum;
    */

    // Method 2 -> using XOR operator
    int n = nums.size();
    int xor1 = 0, xor2 = 0;

    // XOR all array elements
    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= nums[i];
    }

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }

    // Missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main()
{
    vector<int> nums = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNum(nums);
}