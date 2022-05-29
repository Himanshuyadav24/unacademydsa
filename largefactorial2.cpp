#include <iostream>
using namespace std;
#define MAX 500
int multiply(int n, int size, int Result[])
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = Result[i] * n + carry;

        Result[i] = product % 10;

        carry = product / 10;
    }

    while (carry)
    {
        Result[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}

void factorial(int N)
{
    int Result[MAX];

    Result[0] = 1;

    // kitne digit ka ans hoga
    int size = 1;

    for (int i = 2; i < N; i++)
    {
        size = multiply(i, size, Result);
    }

    // for printing
    for (int i = size - 1; i >= 0; i--)
    {
        cout << Result[i];
    }
}

int main()
{
    factorial(4);
    return 0;
}