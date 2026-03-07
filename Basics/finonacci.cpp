#include <iostream>
using namespace std;

int fibonacci(int n)
{

    if (n <= 1)
    {
        return n;
    }

    int last = fibonacci(n - 1);
    int seclast = fibonacci(n - 2);

    return last + seclast;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The number in fibonacci is: " << fibonacci(n);
}