#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int count = 0;
    for (int i = a; i > 0; i /= 10)
    {
        count++;
    }

    cout << count;
}
