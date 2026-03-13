#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();

    // Brute Force
    /*
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        count0++;
        else if (nums[i] == 1)
        count1++;
        else
        count2++;
    }

    int index = 0;
    while (count0 > 0)
    {
        nums[index] = 0;
        index++;
        count0--;
    }
    while (count1 > 0)
    {
        nums[index] = 1;
        index++;
        count1--;
    }
    while (count2 > 0)
    {
        nums[index] = 2;
        index++;
        count2--;
    }
    */

    // Optimal Approach -> Dutch National Flag Algorithm
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
}