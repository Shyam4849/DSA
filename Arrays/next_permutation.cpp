#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    // Brute Force
    /*
    vector<int> original = nums;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end()); // To ge the all the permutations

    ans.push_back(nums); // Inserting the first permutation
    while (next_permutation(nums.begin(), nums.end()))
    {
        ans.push_back(nums);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == original)
        {
            if (original == ans.back())
            {
                nums = ans[0];

                for (int j = 0; j < nums.size(); j++)
                {
                    cout << nums[j] << " ";
                }
            }
            else
            {
                nums = ans[i + 1];
                for (int j = 0; j < nums.size(); j++)
                {
                    cout << nums[j] << " ";
                }
            }
            return;
        }
    }
    */

    // Optimal Approach
    int n = nums.size();
    int i;
    // Finding the pivot point
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
            break;
    }
    // Finding the next greater
    if (i >= 0)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (nums[j] > nums[i])
            {
                swap(nums[j], nums[i]);
                break;
            }
        }
    }
    // Reversing the suffix
    reverse(nums.begin() + i + 1, nums.end());

    // Printing the Next Permutation
    for (int k = 0; k < n; k++)
    {
        cout << nums[k] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
}