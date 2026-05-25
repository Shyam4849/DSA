#include <bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeatingNumber(vector<int> nums)
{
    int n = nums.size();
    int repeating = -1, missing = -1;

    // Brute Force
    /*
    for (int i = 1; i <= n; i++)
    {
        // Updating the count
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            count++;
        }

        // Finding the repeating and missing element
        if (count == 2)
        repeating = i;
        else if (count == 0)
        missing = i;

        // if found, break the loop
        if (repeating != -1 && missing != -1)
        break;
    }
    */

    // Better Approach
    // Initializing a hash map
    int hash[n + 1] = {0};

    // Updating the hash map
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }

    // Finding repeating and missing elements
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;

        // if found, break the loop
        if (repeating != -1 && missing != -1)
            break;
    }

    return {repeating, missing};
}

int main()
{
    vector<int> nums = {1, 2, 3, 6, 7, 5, 7};
    vector<int> result = missingAndRepeatingNumber(nums);

    cout << result[0] << " " << result[1] << endl;
    cout << "Repeating number is: " << result[0] << " and Missing Number is: " << result[1];
}