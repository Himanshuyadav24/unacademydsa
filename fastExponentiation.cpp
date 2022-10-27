#include <iostream>
using namespace std;

int fastexpo(int x, int n)
{
    int result = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            result = result * x;
        }

        x = x * x;
        n = n / 2;
    }

    return result;
}
int main()
{
    int x, n;
    cout << "Entet the number" << endl;
    cin >> x;
    cout << endl
         << "Enter the power" << endl;
    cin >> n;
    // cout<<fact[2];
    cout << endl
         << x << "'s power " << n << " is:- " << fastexpo(x, n) << endl;

    return 0;
}