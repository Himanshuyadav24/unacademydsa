#include <iostream>
using namespace std;
// find the target in 2D array
//  bool search(int arr[][3],int row, int col,int target)
//  {
//      for (int i = 0; i < row; i++)
//      {
//      for (int j = 0; j < col; j++)
//          {
//          if(arr[i][j]==target)
//              {
//                  return true;
//              }
//          }
//      }
//      return false;
//  }

// Columnwise Sum
void colSum(int arr[3][3],int row,int col)
{   int maxi = INT_MIN;
    for (int i = 0; i < col; i++)
    {  int sum = 0;
        for (int j = 0; j <row; j++)
        {
            // because we want to traverse columnwise
            sum += arr[j][i];
        }
        maxi = max(maxi,sum);
        cout<<sum<<" ";
    }
        cout<<endl<<"Maximum sum in cloumwise sums is: "<<maxi<<endl;
}

// rowwise sum
 void rowSum(int arr[3][3],int row,int col)
 {
     int maxi = INT_MIN;
     for (int i = 0; i < row; i++)
     {  int sum = 0;
         for (int j = 0; j <col; j++)
         {
             // because we want to traverse rowwise
             sum += arr[i][j];
         }
         maxi = max(maxi,sum);
         cout<<sum<<" ";
     }
         cout<<endl<<"Maximum sum in Rowwise sums is: "<<maxi<<endl;
 }

// rotate image
// transpose
// void Transpose(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }
// reverse
// void Reverse(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int start = 0;
//         int end = col - 1;
//         while (start < end)
//         {
//             swap(arr[i][start],arr[i][end]);
//             start++;
//             end--;
//         }
//     }
// }
int main()
{
    // //array with garbage value
    // int arr[3][3] = {};

    // //2D array initialise with 0
    // int arr1[3][3]= {0};

    // // 2D array initialise with 1
    // int arr2[3][3]= {1};

    // //store in 2d array in form of 1 D
    // int arr3[3][3] = {1,2,3,4,5,6,7,8,9};

    // int arr[4][3] = {{1},{2,3,4},{3,4,5},{4,5,6}};

    // //store in 2D array without row no.
    // //Row no. is not important in intialising a 2D array
    // //
    // int arr4[][3] = {1,2,3,4,5,6,7,8,9};

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // find target in 2D array
    //  int arr[3][3] = {5,1,3,4,6,8,10,9,11};

    // int target = -1;

    // cout<<"Searching the "<<target<<" in 2D Array - >> "<< search(arr,3,3,target);

    // print columnwiswe SUM
    //  int arr[3][4] = {{3,5,11,2},{7,9,8,0},{5,0,1,3}};

    // cout<<"Columnwise sum is: "<<endl;
    // colSum(arr,3,4);

    // cout<<endl<<"Rowwise sum is: "<<endl;

    // rowSum(arr,3,4);

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    rowSum(arr,3,3);
    colSum(arr,3,3);

    // Transpose(arr, 3, 3);

    // cout<<"After Transpose"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout << endl
    // << "After reverse -> Full rotated image is:" << endl;
    // Reverse(arr, 3, 3);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}