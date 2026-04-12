#include <bits/stdc++.h>
using namespace std;

int number_of_xor_k(vector<int> &nums, int k)
{
    // Brute Force
    /*
    int n = nums.size();

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int xor_val = 0;
        for (int j = i; j < n; j++)
        {
            xor_val ^= nums[j];
            if (xor_val == k)
            {
                count++;
            }
        }
    }
    return count;
    */

    // Optimal Approach
    int n = nums.size();
    unordered_map<int, int> mp; // prefixXOR -> frequency
    int prefixXOR = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        prefixXOR ^= nums[i]; // updating prefixXOR

        int x = prefixXOR ^ k; // required previous prefix

        // if found, add its frequency
        if (mp.find(x) != mp.end())
        {
            count += mp[x];
        }
        mp[prefixXOR]++; // strore current prefixXOR
    }
    return count;
}

int main()
{
    vector<int> nums = {5, 6, 7, 8, 9};
    int k = 6;
    cout << number_of_xor_k(nums, k);
}