
// bool isPossibleSolution(vector<int> arr, int n, int m, int mid)
// {
//     int pagesum = 0;
//     int studentCount = 1;
    
//     for(int i = 0; i<n; i++)
//     {    
//         if(pagesum+arr[i]<=mid)
//         {
//             pagesum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount>m || arr[i] > mid)
//             {
//                 return false;
//             }
                // pagesum = 0;
//             pagesum += arr[i];
//         }
//     }
//     return true;
    
// }


// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
//     int ans = -1;
//     for(int i = 0; i<n; i++)
//     {
//         sum += arr[i];
//     }
//     int e = sum;
    
//     int mid = s+(e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossibleSolution(arr,n,m,mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
    
// }