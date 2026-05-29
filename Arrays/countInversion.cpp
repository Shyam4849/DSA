#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    int count = 0;

    // Merging the elements in sorted order and counting the inversions
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            count += (mid - left + 1); // Counting the invesions
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; ++i)
    {
        arr[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int> &arr, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;

    int mid = low + (high - low) / 2;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += merge(arr, low, mid, high);
    return count;
}

int countInversion(vector<int> &nums)
{
    int n = nums.size();
    return mergeSort(nums, 0, n - 1);
}

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    cout << countInversion(nums);
}