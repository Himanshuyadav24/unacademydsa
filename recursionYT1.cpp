#include <iostream>
using namespace std;

void counting(int n)
{
    // base case
    if (n == 0)
        return;
    
    // recursive call
    counting(n - 1);

    //for printing
    cout << n << endl;
}

int power(int n)
{
    // base case
    // if (n == 0)
    //     return 1;

    // recursive relation
    // int smallproblem = power(n - 1);
    // int biggerProblem = 2 * smallproblem;
    // return biggerProblem;

    // return 2 * power(n - 1);
}

int factorial(int n)
{
    // cout<< n <<endl;

    // base case
    // if (n == 0)
    //     return 1;

    // int smallerProblem = factorial(n - 1);
    // int biggerproblem = n * smallerProblem;

    // return biggerproblem;

    // return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // FACTORIAL RECURSION
    //  int ans = factorial(n);
    //  cout << "ans is " << ans << endl;

    // POWER RECURSION
    // int ans = power(n);
    // cout << "Ans is " << ans << endl;

    // PRINT COUNTING
    counting(5);

    return 0;
}