#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rev = 0;
    for (int i = num; i != 0; i /= 10)
    {
        rev = rev * 10 + (i % 10);
    }

    if (rev > INT_MAX || rev < INT_MIN)
    {
        return 0;
    }

    if (rev == num)
    {
        cout << "The given number is Palindrome";
    }
    else
    {
        cout << "The given number is not Palindrome";
    }
}