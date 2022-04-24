#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        if (row == n)
        {
            // last row print karne ke liye
            for (int col = 1; col <= n; col++)
            {
                cout << " *";
            }
        }
        else if (row == 1)
        {
            // first row print karne ke liye
            cout << "    ";
            cout << " *";
        }

        else
        {
            // 2,3,4 row print karne ke liye
            for (int col = 1; col <= n - row; col++)
            {
                // outside spaces
                cout << " ";
            }
            // first star
            cout << " *";
            for (int col = 1; col < 2 * (row - 1); col++)
            {
                // inside hollow spaces
                cout << " ";
            }
            // second star
            cout << "*";
        }
        // for changing the row
        cout << endl;
    }
}