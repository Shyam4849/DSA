#include <bits/stdc++.h>
using namespace std;

void linear_search(vector<int> &nums, int key)
{
    bool found = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == key)
        {
            cout << "Found at index " << i;
            found = true;
            break;
        }
    }
    if (found == false)
        cout << "Key not found";
}

int main()
{
    vector<int> nums = {3, 4, 2, 1, 5, 7};
    int key = 8;
    linear_search(nums, key);
}