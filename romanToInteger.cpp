#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int toInt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (roman[s[i]] < roman[s[i + 1]])
            toInt -= roman[s[i]];
        else
            toInt += roman[s[i]];
    }
    return toInt;
}

int main()
{
    string s = "IV";
    // cout << "Enter the Roman: ";
    // cin >> s;

    cout << romanToInt(s);
}