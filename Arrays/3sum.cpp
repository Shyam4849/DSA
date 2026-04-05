#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
    */

    // Optimal Approach
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin(), nums.end()); // sort the given array

    for (int i = 0; i < n; i++) // Fixing one element
    {
        int left = i + 1;  // second number
        int right = n - 1; // third number

        if (i > 0 && nums[i] == nums[i - 1]) // skipping the duplicates for i
            continue;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) // checking the required condition
            {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) // skipping duplicated for left
                    left++;
                while (left < right && nums[right] == nums[right + 1]) // skipping duplicated for right
                    right--;
            }
            else if (sum < 0)
                left++;
            else
                right--;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}