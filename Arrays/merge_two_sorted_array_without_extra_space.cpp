#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> nums1, vector<int> nums2, int m, int n)
{

    // Three pointers
    int i = m - 1;     // valid last index of nums1
    int j = n - 1;     // valid last index of nums2
    int k = m + n - 1; // last index of nums1

    // Comparing the elements and inserting them from the last in nums1
    while (i >= 0 && j >= 0)
    {
        if (nums2[j] > nums1[i])
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        else
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
    }

    // Coping the remaining elements of nums2
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }

    for (int num : nums1)
    {
        cout << num << " ";
    }
}

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, nums2, m, n);
}