#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    if (n == 1)
        return true;
    if (n == 4)
        return false;

    int sum = 0;

    for (int i = n; i != 0; i = i / 10)
    {
        sum = sum + pow((i % 10), 2);
        // cout << "working" << endl;
    }
    return isHappy(sum);
}

int main()
{
    int n = 2;

    cout << isHappy(n);
}