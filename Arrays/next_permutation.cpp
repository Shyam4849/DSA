#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{

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
}

int main()
{
    vector<int> nums = {3, 2, 1};
    nextPermutation(nums);
}