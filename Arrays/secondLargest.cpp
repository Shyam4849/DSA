#include <bits/stdc++.h>
using namespace std;

/*
int secondLargest(vector<int> arr)
{
    int large = INT_MIN, secondLarge = INT_MIN;
    int i;

    for (int i = 0; i < arr.size(); i++)
    {
        large = max(large, arr[i]);
    }

    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] > secondLarge && arr[i] != large)
            secondLarge = arr[i];
    }
    return secondLarge;
}
*/

int secondLargest(vector<int> arr)
{
    int large = INT_MIN, secondLarge = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large)
            secondLarge = arr[i];
    }
    return secondLarge;
}

int main()
{
    vector<int> arr = {3, 2, 1, 6, 0, 7};
    cout << secondLargest(arr);
}