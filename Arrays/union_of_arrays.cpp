#include <bits/stdc++.h>
using namespace std;

void union_arrays(vector<int> &arr1, vector<int> &arr2)
{

    // set<int> set_arr1(arr1.begin(), arr1.end());
    // set<int> set_arr2(arr2.begin(), arr2.end());

    // set_arr1.merge(set_arr2);

    // for (int x : set_arr1)
    // {
    //     cout << x << " ";
    // }

    // Brute Force
    /*
    set<int> my_set;

    for (int i = 0; i < arr1.size(); i++)
    {
        my_set.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        my_set.insert(arr2[i]);
    }

    for (int x : my_set)
    {
        cout << x << " ";
    }
    */

    // Optimal Approach
    vector<int> result;
    int n = arr1.size();
    int m = arr2.size();

    int pt1 = 0;
    int pt2 = 0;
    while (pt1 < n && pt2 < m)
    {
        if (arr1[pt1] < arr2[pt2])
        {
            if (result.empty() || result.back() != arr1[pt1])
            {
                result.push_back(arr1[pt1]);
            }
            pt1++;
        }
        else if (arr1[pt1] > arr2[pt2])
        {
            if (result.empty() || result.back() != arr2[pt2])
            {
                result.push_back(arr2[pt2]);
            }
            pt2++;
        }
        else
        {
            if (result.empty() || result.back() != arr1[pt1])
            {
                result.push_back(arr1[pt1]);
            }
            pt1++;
            pt2++;
        }
    }
    while (pt1 < n)
    {
        if (result.empty() || result.back() != arr1[pt1])
        {
            result.push_back(arr1[pt1]);
        }
        pt1++;
    }
    while (pt2 < m)
    {
        if (result.empty() || result.back() != arr2[pt2])
        {
            result.push_back(arr2[pt2]);
        }
        pt2++;
    }
    for (int x : result)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};

    union_arrays(arr1, arr2);
}