// #include<iostream>
// using namespace std;

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
// // int main()
// // {
// //     int arr[3] = {2,-1,1};

// //     int summing[100];
// //     int sum = 0;

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     sum=sum+arr[i];
//     //     summing[i] = sum;
//     // }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout<<summing[i]<<" ";
//     // }

//     // cout<<endl<<"yaha tak agya"<<endl;
    
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     if(summing[i]==summing[2]-summing[i]+arr[i])
//     //     {
//     //         cout<<i<<endl;
//     //     }
//     // }
//     // return 0;
//     // cout<<"Pivot is "<<getPivot(arr,6)<<endl;

//     // return 0;
// }