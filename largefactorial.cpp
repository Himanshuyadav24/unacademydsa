#include <iostream>
using namespace std;
#define MAX 500

// This function multiplies n with the number
// represented by ans[].
// ans_size is size of ans[] or number of digits in the
// number represented by ans[]. This function uses simple
// school mathematics for multiplication.
// This function may value of ans_size and returns the
// new value of ans_size

int multiply(int n, int Res[], int size)
{
    int carry = 0; // initialise carry
    for (int i = 0; i < size; i++)
    {
        // one by one multiply n with individual digit of res()
        int prod = Res[i] * n + carry;

        // store last digit of 'prod' in ans[]
        Res[i] = prod % 10;

        // put rest in carry
        carry = prod / 10;
    }

    // put carry in ans and increase ans size
    while (carry)
    {
        // cout<<carry<<endl;
        Res[size] = carry % 10;
        // cout<<endl<<ans[ans_Size];
        carry = carry / 10;
        size++;
    }

    return size;
}
void factorial(int n)
{
    int Res[MAX];

    Res[0] = 1;
    int size = 1;

    // apply simple factorial formulae
    for (int i = 2; i <= n; i++)
    {
        size = multiply(i, Res, size);
    }
    cout << "Factorial is " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << Res[i];
        
    }
}

int main()
{
    factorial(4);

    return 0;
}