#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        pos.push_back(nums[i]);
        else
        neg.push_back(nums[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }

    return result;
    */

    // Optimal approach

    int n = nums.size();
    vector<int> result(n); // Initializing vector with space

    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            result[posIndex] = nums[i];
            posIndex += 2;
        }
        else
        {
            result[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4}; // 3, -2 , 1, -5, 2, -4

    vector<int> result = rearrangeArray(nums);

    for (int x : result)
    {
        cout << x << " ";
    }
}