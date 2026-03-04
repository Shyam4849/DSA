#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    // Brute Force
    /*
    int n = nums.size();
    k = k % n;
    vector<int> temp;

    if (nums.size() == 1)
    return;

    for (int i = n - k; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        temp.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        nums[i] = temp[i];
    }
    cout << "Rotated array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    */

    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    cout << "Rotated array: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2};
    rotate(nums, 7);
}