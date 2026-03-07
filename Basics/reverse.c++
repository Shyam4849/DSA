#include <iostream>
using namespace std;

int main()
{

    int org;
    cout << "Enter a number: ";
    cin >> org;

    int rev = 0;
    for (int i = org; i != 0; i /= 10)
    {
        rev = rev * 10 + (i % 10);
    }
    cout << rev;
}
