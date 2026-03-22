#include <bits/stdc++.h>
using namespace std;

vector<int> leadersOfArray(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    vector<int> result;
    result.push_back(nums.back());

    for (int i = n - 2; i >= 0; i--)
    {
        bool isLeader = true;
        // cout << "Entering the i loop" << endl;
        for (int j = i; j < n; j++)
        {
            // cout << "Entering the j loop" << endl;
            if (nums[j] > nums[i])
            {
                // cout << "Entering the if" << endl;
                isLeader = false;
                break;
            }
        }
        if (isLeader)
        {
            result.push_back(nums[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
    */

    // Optimal Approach
    int n = nums.size();
    vector<int> result;

    int rightMax = nums.back();
    result.push_back(rightMax); // Inserting the last element

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > rightMax)
        {
            rightMax = max(rightMax, nums[i]); // updating the max element
            result.push_back(rightMax);        // inserting the leader
        }
    }
    reverse(result.begin(), result.end()); // reversing the result (optional)
    return result;
}

int main()
{
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> result = leadersOfArray(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}