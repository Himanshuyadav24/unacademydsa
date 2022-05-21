#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the value of a is:- " << endl;
    cin >> a;
    cout << endl
         << "Enter the value of b is:- " << endl;
    cin >> b;

    cout << endl
         << "Gcd of " << a << " & " << b << " is " << gcd(a, b) << "." << endl;

    return 0;
}