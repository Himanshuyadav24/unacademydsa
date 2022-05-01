#include <iostream>
using namespace std;
int main()
{
    // creation

    // initial with 0
    // int arr[3][3] = {0};

    // // initial with 1
    // int arr1[3][3] = {1};

    // // initial 2D array like !D
    // int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int arr3[3][3] = {5, 1, 3, 4, 6, 8, 10, 9, 11};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr3[i][j] == 5)
    //         {
    //             cout << "True" << endl;
    //         }
    //     }
    // }

    // cout << "false" << endl;

    // int n = 3;

    // input
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          cin>>arr[i][j];
    //      }

    // }

    // print entire 2D matrix
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout<<"Sab sahi chal raha hai"<<endl;

    int arr[3][4] = {3, 5, 11, 2, 7, 9, 8, 0, 5, 0, 1, 3};
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                sum = sum + arr[i][j];
            }

            if (j == 1)
            {
                sum1 = sum1 + arr[i][j];
            }

            if (j == 2)
            {
                sum2 = sum2 + arr[i][j];
            }

            if (j == 3)
            {
                sum3 = sum3 + arr[i][j];
            }
        }
    }

    cout << sum << endl
         << sum1 << endl
         << sum2 << endl
         << sum3 << endl;

    return 0;
}