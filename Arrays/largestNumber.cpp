#include <bits/stdc++.h>
using namespace std;

/*
int largestElement(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 1];
}

int main()
{
    int arr[5] = {3, 2, 4, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << largestElement(arr, n);
}
*/

int largestElement(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    return arr[arr.size() - 1];
}

int main()
{
    vector<int> arr = {3, 2, 4, 5, 9};

    cout << largestElement(arr);
}