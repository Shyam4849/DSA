#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    /*
    if (n < 1)
    return false;

    for (int i = 0; i <= n; i++) {
        if(n == pow(3, i)) return true;

        if(n < pow(3, i)) return false;
    }
    return false;
    */

    // Better Approach
    if (n <= 0)
        return false;
    if (n == 1)
        return true;

    while (n % 3 == 0)
    {
        n = n / 3;

        if (n == 1)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << isPowerOfThree(n);
}