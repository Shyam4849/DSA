#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    // Brute Force
    /*
    int n = nums.size();
    set<vector<int>> result;

    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            for (int c = b + 1; c < n; c++)
            {
                for (int d = c + 1; d < n; d++)
                {
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    if (sum == target)
                    {
                        vector<int> temp = {nums[a], nums[b], nums[c], nums[d]};
                        sort(temp.begin(), temp.end());
                        result.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(result.begin(), result.end());
    return ans;
    */

    // Optimal Approach
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) // fixed the first element
    {
        if (i > 0 && nums[i] == nums[i - 1]) // skipped the duplicates
            continue;
        for (int j = i + 1; j < n; j++) // fixed the second element
        {
            if (j > i + 1 && nums[j] == nums[j - 1]) // skipped the duplicates
                continue;

            int left = j + 1;  // third element
            int right = n - 1; // forth element

            while (left < right)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target)
                {
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) // skipped the duplicates for left
                        left++;
                    while (left < right && nums[right] == nums[right + 1]) // skipped the duplicates for right
                        right--;
                }
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 2, 2, 2};
    int target = 8;

    vector<vector<int>> result = fourSum(nums, target);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}