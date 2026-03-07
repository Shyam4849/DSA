#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else
        {
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
    }

    return true;

    // if (i >= (text.length() - 1) / 2)
    //     return true;

    // if (text[i] != text[text.length() - 1 - i])
    //     return false;

    // return isPalindrome(i + 1, text);
}

int main()
{
    string s;
    cout << "Enter a text: ";
    cin >> s;

    cout << isPalindrome(s);
}