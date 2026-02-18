#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    /*
    set<int> interSet;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                interSet.insert(nums1[i]);
            }
        }
    }
    vector<int> result(interSet.begin(), interSet.end());
    return result;
    */

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> temp;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (i > 0 && nums1[i] == nums1[i - 1]) // fixed duplicate check
            continue;
        int low = 0, high = nums2.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums2[mid] == nums1[i])
            {
                temp.push_back(nums2[mid]);
                break;
            }
            else if (nums2[mid] < nums1[i])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return temp;
}

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = intersection(nums1, nums2);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}