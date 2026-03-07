#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{

    vector<int> result(digits);

    int n = result.size();
    int carry;

    int i = n - 1;

    while (i >= 0)
    {
        if (result[i] < 9)
        {
            result[i] += 1;
            carry = 0;
            break;
        }

        if (result[i] == 9)
        {
            result[i] = 0;
            carry = 1;
        }
        i--;
    }
    if (carry == 1)
    {
        result.insert(result.begin(), carry);
    }
    return result;
}

int main()
{

    vector<int> digits = {9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 0};

    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}