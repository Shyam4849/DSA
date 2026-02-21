#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &nums)
{
    /*
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(nums[i] > nums[j]) return false;
        }
    }
    return true;
    */

    // Optimal Approach
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
            return false;
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 1, 4, 5};

    bool result = isSorted(nums);

    if (result)
        cout << "True";
    else
        cout << "False";
}