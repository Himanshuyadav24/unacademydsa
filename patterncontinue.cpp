#include <iostream>
using namespace std;
int main()
{
    // counting
    //  int n = 7;
    //  int count = 1;
    //  for (int row = 1; row <= n; row++)
    //  {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // int count = 1;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << count;
    //         count++;
    //         if (col == row)
    //             continue;
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row <= n; row++)
    // {
    //     int c = count--;
    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << c - n - row + col;
    //     }
    //     cout << endl;
    // }
    // return 0;

    //     int n = 4;
    //     for (int row = 1; row <= n; row++)
    //     {
    //         if (row == 1)
    //         {
    //             cout << "*";
    //         }

    //         else
    //         {
    //             cout << "*";
    //             for (int col = 1; col < row; col++)
    //             {
    //                 cout << col;
    //             }
    //             for (int col = row - 2; col >= 1; col--)
    //             {
    //                 cout << col;
    //             }
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     int m = 3;
    //     for (int row = 1; row <= m; row++)
    //     {
    //         if (row == m)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout << "*";
    //             for (int col = 1; col < n - row ; col++)
    //             {
    //                 cout << col;
    //             }
    //             for (int col = m-row-1; col >=1; col--)
    //             {
    //                 cout<<col;
    //             }
    //             cout<<"*";
    //         }
    //         cout << endl;
    //     }
    // }

    // int n = 7;
    // for (int row = 1; row <= n; row++)
    // {
    //     cout<<1;
    //     for (int col = 1; col <= row-2; col++)
    //     {

    //     }

    // }

    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 1; col < 2 * row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*(n-row)+1; col++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // int n =5;
    // for (int row = 1; row <= n; row++)
    // {
    //    for (int col = 1; col <= row; col++)
    //    {
    //        cout<<"*";
    //    }
    //    for (int col = 0; col <= 2*(n-row)+1; col++)
    //    {
    //        cout<<" ";     
    //    }
    //     for (int col = 1; col <=row; col++)
    //     {
    //         cout<<"*";
    //     }
    //    cout<<endl;
    // }

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n-row+1; col++)
    //     {
    //     cout<<"*";
    //     }
    //     for (int col = 1; col <= 2*row; col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int col = 1; col <= n-row+1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

    

    
    return 0;
}