#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    if (num >= 0 && num <= 9)
        return num;

    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + lastDigit;
        num = num / 10;
    }
    return addDigits(sum);
}

int main()
{
    int num = 38;
    cout << addDigits(num);
}