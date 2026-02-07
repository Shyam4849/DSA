#include <iostream>
using namespace std;

int printNumber(int current, int n)
{
    if (current > n)
    {
        return 0;
    }
    cout << current << " ";

    printNumber(current + 1, n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printNumber(1, n);
}