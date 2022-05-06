// #include<iostream>
// using namespace std;

// bool binarySearch(int arr[][3], int n , int  m, int row,int target)
// {
//     // int s = 0;
//     // int e= m -1;
//     // int mid = s+(e-s)/2;

//     // while(s<=e)
//     // {
//     //     if(arr[n][mid]==target)
//     //     {
//     //         cout<<n<<" "<<mid<<endl;
//     //     }

//     //     if(arr[row][mid])
//     // }

// }

// bool search(int arr[][3],int n , int m , int target)
// {
//     int s =0;
//     int e = n-1;

//     int  mid = s+(e-s)/2;

//     while(s<=e)
//     {
//         if(arr[mid][0]==target)
//         {
//             return true;
//         }
//         if(arr[mid][m-1]==target)
//         {
//             return true;
//         }

//         if(target>arr[mid][0] && target<arr[mid][m-1])
//         {
//             int ans = binarySearch(arr,n,m,target);
//             return ans;
//         }

//         if(target<arr[mid][0])
//         {
//             e = mid -1;
//         }

//         if(target>arr[mid][m-1])
//         {
//             s = mid+1;
//         }


//     }
// }
// int main()
// {
//     int arr[3][3] = {1,5,9,14,20,23,30,34,43};

//     int n = 3;

//     int m = 3;

//     int target = 34;

//     cout<<search(arr,n,m,target);
//     return 0;
// }
#include<iostream>
using namespace std;
bool binarySearch(int arr[][3], int n, int m, int row, int target) {
    int start = 0;
    int end = m - 1;
    int mid = start + (end - start) / 2;
    while(start <= end) {
        if(arr[mid][0] == target) {
            cout<<row<<" "<<mid<<endl;
            return true;
        }
        else if(arr[row][mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

bool search(int arr[][3], int row, int col, int target) {
    int start = 0;
    int end = row - 1;

    int mid = start + (end - start) / 2;
    while(start <= end) {
        //check starting element of row
        if(arr[mid][0] == target) {
            cout<<mid<<" "<<0<<endl;
            return true;
        }

        //check ending element of row
        if(arr[mid][col-1] == target) {
            cout<<mid<<" "<<col - 1<<endl;
            return true;
        }

        //check if element is present between starting and ending element
        if(target > arr[mid][0] && target < arr[mid][col-1]) {
            bool ans = binarySearch(arr, row, col, mid, target);
        }

        //upper part
        if(target < arr[mid][0]) {
            end = mid - 1;
        }

        //lower part
        if(target > arr[mid][col-1]) {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

