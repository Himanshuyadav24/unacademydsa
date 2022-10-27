#include <iostream>
using namespace std;

void findSequence(int leftsum, int rightSum, char *output, int i, int j)
{
    // base case
    if (i > j)
    {
        if (leftsum == rightSum)
            cout << output << endl;
        return;
    }
 
    // put 0,0
    output[i] = '0';
    output[j] = '0';
    findSequence(leftsum, rightSum, output, i + 1, j - 1);
 
    // put0,1
    output[i] = '0';
    output[j] = '1';
    findSequence(leftsum, rightSum+1, output, i + 1, j - 1);
 
    // put 1,0
    output[i] = '1';
    output[j] = '0';
    findSequence(leftsum+1, rightSum, output, i + 1, j - 1);
 
    // put1,1
    output[i] = '1';
    output[j] = '1';
    findSequence(leftsum+1, rightSum+1, output, i + 1, j - 1);
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