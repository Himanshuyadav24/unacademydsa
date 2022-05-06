#include<iostream>
using namespace std;

// int getPivot(int arr[],int n)
// {
//     int start = 0;
//     int end = n -1;
//     int maxi;
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(arr[i],arr[i+1]);
//     }
//     while(start<end)
//     {
//     int mid = start+(end-start)/2;

//     if(arr[mid]<=maxi)
//     {
//         start = mid+1;
//     }
//     else
//         end = mid-1;
//     }
//     return start;
// }
int main()
{
    int arr[6] = {1,7,3,6,5,6};

    int summing[100];
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum=sum+arr[i];
        summing[i] = sum;
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<summing[i]<<" ";
    }
    
    for (int i = 0; i < 6; i++)
    {
        if(summing[i]==summing[5]-summing[i]-arr[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
    // cout<<"Pivot is "<<getPivot(arr,6)<<endl;

    // return 0;
}