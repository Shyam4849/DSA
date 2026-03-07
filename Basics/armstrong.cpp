#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // 153 -> 1^3 + 5^3 + 3^3 = 153

    int count = 0;
    double sum = 0;
    int temp = num;

    for (int i = num; i != 0; i /= 10)
    {
        count++;
    }
    // cout << count << endl;

    for (int i = num; i != 0; i /= 10)
    {
        sum += pow(i % 10, count);
    }

    // cout << sum << endl;
    if (sum == num)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
}