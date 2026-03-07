#include <iostream>
using namespace std;

int printReverse(int current, int n)
{
    if (current < n)
    {
        return 0;
    }

    cout << current << " ";
    printReverse(current - 1, n);
}

int main()
{
    int current;
    cout << "Enter a number: ";
    cin >> current;

    printReverse(current, 1);
}