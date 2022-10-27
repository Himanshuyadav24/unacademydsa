#include <iostream>
using namespace std;

void findSequence(int leftsum, int rightSum, char *output, int i, int j)
{
    
}

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    char *arr = new char[2 * n];

    findSequence(0, 0, arr, 0, 2 * n - 1);

    return 0;
}