#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    // Brute Force
    /*
        if (n < 1)
        return false;

        for (int i = 0; i <= n; i++) {
            if(n == pow(3, i)) return true;

            if(n < pow(3, i)) return false;
        }
        return false;
    */

    // Better Approach - 1
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

    // Better Approach - 2
    /*
            long long current = 1;
            if(n==1) return true;

            while(current < n){
                current = current * 3;

                if(current == n) return true;
            }
            return false;
    */
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << isPowerOfThree(n);
}