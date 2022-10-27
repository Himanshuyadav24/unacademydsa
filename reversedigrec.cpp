#include <iostream>
using namespace std;
void reverse(int n, int &sum)
{
    // base case
    if (n == 0)
    {
        cout << sum;
        return;
    }

    int digit = n % 10;
    n = n / 10;
    sum = sum * 10 + digit;
    reverse(n, sum);
}
int main()
{
    int n = 516;
    int sum = 0;

    reverse(n, sum);

    return 0;
}