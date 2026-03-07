#include <bits/stdc++.h>
using namespace std;

int sqrt(int x)
{
    int low = 1, high = x / 2;
    int ans = 0;

    if (x < 2)
        return x;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    cout << sqrt(x) << endl;
}