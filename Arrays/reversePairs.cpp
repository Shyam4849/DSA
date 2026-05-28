#include <bits/stdc++.h>
using namespace std;

// Brute Force -> TLE
/*
int reversePair(vector<int> nums)
{

    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > 2LL * nums[j])
            count++;
        }
    }

    return count;
}
*/

// Optimal Approach

// Merges two sorted sub-vectors back into the original vector
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Compare elements from both halves and push the smaller one to temp
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }

    // Copy any remaining elements from the left subarray
    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    // Copy any remaining elements from the right subarray
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    // Transfer sorted elements from temp back into the original vector
    for (int i = low; i <= high; ++i)
    {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &nums, int low, int mid, int high)
{
    int right = mid + 1;
    int count = 0;

    for (int i = low; i < mid; i++)
    {
        while (right <= high && nums[i] > 2 * nums[right])
        {
            right++;
        }
        count += (right - (mid + 1));
    }
    return count;
}

// Main recursive function that executes Merge Sort
int mergeSort(vector<int> &arr, int low, int high)
{
    int count = 0;
    // Base case: If the subarray has 1 or 0 elements, it is already sorted
    if (low >= high)
        return count;

    int mid = low + (high - low) / 2;

    // Recursively split and sort the left and right halves
    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += countPairs(arr, low, mid, high);

    // Merge the sorted halves
    merge(arr, low, mid, high);
    return count;
}

int reversePair(vector<int> &nums)
{
    int n = nums.size();
    return mergeSort(nums, 0, n - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << reversePair(nums);
}