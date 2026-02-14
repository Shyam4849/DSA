#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{

    vector<int> ans(digits);

    int n = ans.size();
    int carry;

    int i = n - 1;

    while (i >= 0)
    {
        if (ans[i] < 9)
        {
            ans[i] += 1;
            carry = 0;
            break;
        }

        if (ans[i] == 9)
        {
            ans[i] = 0;
            carry = 1;
        }
        i--;
    }
    if (carry == 1)
    {
        ans.insert(ans.begin(), carry);
    }
    return ans;
}

int main()
{

    vector<int> digits = {1, 2, 3};

    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}