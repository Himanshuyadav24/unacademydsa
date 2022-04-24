#include <iostream>
using namespace std;
int main()
{
    // int n =4;

    // for (int row = 1; row <=n; row++)
    // {
    //     for (int col = 1; col <=n; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // half pyramid
    // int n = 5;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl;

    // }

    // int n = 5;
    // for (int row = 1; row <= n; row++)
    // {
    //     int i=1;
    //     for (int col = n; col>=row; col--)
    //     {
    //      cout<<i;
    //      i++;
    //     }
    //     cout<<endl;
    // }

    // int n =5;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row-1; col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int col = 1; col <= n-row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n =5;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row-1; col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int col = 1; col <= n-row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // hollow inverted half pyramid
    // int n =5;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row==1||row==n)
    //     {
    //         for (int col = 1; col <= n-row+1; col++)
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     else
    //     {
    //         cout<<"*";
    //         for (int col = 1; col <= n-row-1; col++)
    //         {
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n = 6;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row-1; col++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int col = n; col>=row; col--)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // int n = 6;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row == n)
    //     {
    //         for (int row = 1; row <= n; row++)
    //         {
    //             cout << " *";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = n - row; col >= row; col--)
    //         {
    //             cout << "  ";
    //         }
    //         for (int col = 1; col <= 2; col++)
    //         {
    //             cout << " *";
    //             for (int col = 1; col <= row - 1; col++)
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //             }
    //     cout << endl;
    // }

    // int n = 6;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row==n)
    //     {
    //         // last row print karne ke liye
    //         for (int row = 1; row <= n; row++)
    //         {
    //             cout<<" *";
    //         }
    // }
    // else if (row>=2&&row<n)
    // {
    //     //spaces print karne ke liye
    //     for (int col = 1; col <= n-row ; col++)
    //     {
    //         cout<<" ";
    //     }

    //     //first start print karne ke liye
    //     cout<<" *";
    //     for (int col = 1; col <= 2*(row-1); col++)
    //     {
    // andar ki spaces print karne ke liye
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //         cout<<endl;
    // }

    // int n = 5;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row == n)
    //     {
    //         for (int i = 0; i <= n; i++)
    //         {
    //             cout<<i;
    //         }

    //     }

    //     else if (row == 1)
    //     {
    //     cout << row;
    // }

    // else
    // {
    //     for (int col = 1; col <= 2; col++)
    //     {
    //         cout<<"1";
    //         for (int col = 1; col <= row-1; col++)
    //         {
    //             cout<<" ";
    //         }
    //         cout<<row<<" ";
    //         break;
    //     }
    //     }
    //     cout<<endl;
    // }

    //     return 0;
    // }

    // digits full pyramid
    //  int n =5;
    //  for (int row = 1; row <= n; row++)
    //  {
    //      //space print kar diye
    //      for (int col = 1; col <= n-row; col++)
    //      {
    //          cout<<" ";
    //      }

    // // half pyramid ki digits complete hogyi
    //  int p = row;
    //  for (int col = 1; col <= row ; col++)
    //  {
    //      cout<<p;
    //      p++;
    //  }

    // // p niklega jab ek bdhke niklega to ek to vo kam karna hai or ek question ki vajah se kam karna hai
    //     p=p-2;

    //     //other half pyramid ki digits or complete krni hai
    //     for (int col = 1; col <= row-1; col++)
    //     {
    //         cout<<p;
    //         p--;
    //     }
    //     cout<<endl;

    // }

    // int n = 5;

    // for (int row = 1; row <= n; row++)
    // {
    //     // last row ke liye qki inme spaces nhi hai to alg se treat krenge
    // if (row == n)
    // {
    //     for (int i = 1; i <= row; i++)
    //     {
    //         cout << i<<" ";
    //     }
    // }
    // //first row ke liye
    // else if (row==1)
    // {
    //     for (int i = 1; i <= n-row; i++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<row;
    // }

    // // rest rows
    // else
    // {

    //     // shuru me spaces dhaalne ke liye
    //     for (int col = 1; col <= n - row; col++)
    //     {
    //         cout << " ";
    //     }

    //         // sabka first digit 1 hai
    //         cout << "1";

    //         // beech ki spaces laane ke liye
    //         for (int col = 1; col < 2 * (row - 1); col++)
    //         {
    //             cout << " ";
    //         }

    //         //last digit row ke no. ke equal hai
    //         cout << row;
    //     }
    //     // for next line
    //     cout << endl;
    // }

    // int n=5;
    // for (int row = 1; row <= n; row++)

    // {
    //     if (row==1)
    //     {
    //         for (int i = 1; i <= n-row+1; i++)
    // //         {
    //             cout<<i<<" ";
    //         }
    //     }

    //     else if (row==n)
    //     {
    //         cout<<n;
    //     }

    //     else
    //     {
    //     cout<<row;
    //     for (int col = 1; col <= 2*(n-row); col++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<n;
    //     }
    //     cout<<endl;
    // }

    // int n =5;

    // for (int row = 1; row <= n; row++)
    // {
    //     cout<<'A';
    //     for (char col = 'A'+1; col <='A'+row-1; col++)
    //     {
    //         cout<<char(col);
    //     }
    //     for (char col = 'A'+row-2; col>='A'; col--)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // char ch =65;
    // cout<<ch;
    // cout<<endl;

    // int n = 2;
    // char ch1 = 'A'+n;
    // cout<<ch1;

    // int n =5;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n-row; col++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<"1";
    //     for (int col = 2; col <= row; col++)
    //     {
    //         cout<<col;
    //     }
    //     for (int col = row-1; col>=1; col--)
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl;

    // }

    // int n =5;

    // for (int row = 1; row <= n; row++)
    // {

    //     for (int col = 1; col <= n-row+4; col++)
    //     {
    //         cout<<"*";
    //     }

    //     if (row==1)
    //     {
    //         cout<<row;
    //         cout<<"*";
    //     }

    //     else
    //     {

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<row;
    //         cout<<"*";
    //     }

    //     }

    //     for (int col = 1; col <= n-row+3; col++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // solid diamond
    // int n = 5;
    // for (int row = 1; row <= n; row++)
    // {

    //     for (int col = 1; col <= 5 - row; col++)
    //     {
    //         cout << " ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 1; col <= row - 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int m = 5;
    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col <= row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = n - row + 1; col >= 1; col--)
    //     {
    //         cout << "*";
    //     }
    //         for (int col = 1; col <= n-row; col++)
    //         {
    //             cout<<"*";
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }
    //

    // hollow diamond

    //     int n = 5;
    //     int m = 5;
    //     for (int row = 1; row <= n; row++)
    //     {
    //         if (row == 1)
    //         {
    //             cout << "    *" << endl;
    //         }

    //         else
    //         {
    //             for (int col = 1; col < n - row + 1; col++)
    //             {
    //                 cout << " ";
    //             }
    //             cout << "*";
    //             for (int col = 1; col < 2 * (row - 1); col++)
    //             {
    //                 cout << " ";
    //             }
    //             cout << "*";
    //             cout << endl;
    //         }
    //     }

    //     for (int row = 1; row <= m; row++)
    //     {
    //         if (row == m)
    //         {
    //             cout << "    *";
    //         }

    //         else
    //         {
    //             for (int col = 1; col <= row - 1; col++)
    //             {
    //                 cout << " ";
    //             }
    //             cout << "*";
    //             for (int col = row-1; col <=m-row+2; col++)
    //             {
    //                 cout << " ";
    //             }
    //             cout << "*";
    //             cout<<endl;
    //         }
    //     }

    //     return 0;
    // }

    // solid half diamond

    // int n =5;
    // int m =4;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col < n-row+1; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // int m = 3;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<row+2;
    //     }
    //     cout<<endl;
    // }
    // for (int row = 1; row <= m; row++)
    // {
    //     for (int col = 1; col <= n-row+1; col++)
    //     {
    //         cout<<m-row+3;
    //     }
    //     cout<<endl;
    // }

    // return 0;
    // }

    // int n = 4;
    // int m =4;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row == 1)
    //     {
    //         cout << 1;
    //     }

    //     else
    //     {
    //         for (int col = 1; col <= row; col++)
    //         {
    //             cout << row;

    //             if (col == row)
    //                 continue;

    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row <= m; row++)
    // {

    //     for (int col = 1; col <= m-row+1; col++)
    //     {
    //         cout<<m-row+1;
    //         if(col==m-row+1)
    //         continue;
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // int n = 4;
    // for (int row = 1; row <= n; row++)
    // {
    //     if (row == 1)
    //     {
    //         cout << 1;
    //     }
    //     else


    //     {
    //         int i = 1;
    //         for (int col = 1; col <= row; col++)
    //         {
    //             int ans = i+1;
    //             cout << ans;
    //             i++;

    //             if(col==row)
    //             continue;
    //             cout<<"*";

    //             int an1 = i;
               
    //         }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int n = 4;

// for (int row = 1; row <= n; row++)
// {
//     cout<<"*";
//     for (int col = 1; col <= 2*row - 3; col++)
//     {
//         int count =1;
        
//         for (int col = 0; col < row-1; col++)
//         {

//         }
        
//     }
//     cout<<endl;
    
// }





return 0;
}