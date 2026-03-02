#include <bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int> &nums)
{
    // Brute Force
    /*
    int n = nums.size();
    vector<int> temp;

    for (int i = 1; i < n; i++)
    {
        temp.push_back(nums[i]);
    }
    temp.push_back(nums[0]);

    cout << "Rotated array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    */

    // Optimal Approach
    int n = nums.size();
    int temp = nums[0];

    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
    cout << "Rotated array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    rotateArrayByOne(nums);
}