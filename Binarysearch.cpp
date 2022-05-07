// #include<iostream>
// #include<limits.h>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // bool binarySearch(int arr[], int size, int target)
// // {
//     // int start = 0;
//     // int end = size - 1;
//     // int mid = start + (end - start) / 2;

//     // while (start <= end)
//     // {

//     //     if (arr[mid] == target)
//     //     {
//     //         return true;
//     //     }
//     //     if (arr[mid] < target)
//     //     {
//     //         start = mid + 1;
//     //     }
//     //     else
//     //         {
//     //             end = mid -1;
//     //         }
            
//     //     mid = start + (end - start) / 2;
//     // }
//     // return false;
// // }

// // int main()
// // {
// //     int arr[9] = {1, 22,4, 34, 21, 4, 6, 0, 2};
// //     int size = 8;

// //     sort(arr, arr + size);
// //     vector<int> v;
// //     int target = 4;

// //     // cout<<binarySearch(arr, size, target);


//     // cout<<binary_search(arr,arr+size, target);
//     // cout<<upper_bound(target);
// //     lower_bound(v.begin(),v.end(),4);
    
// //     return 0;
// // }

// // vector <int> ans;
	    
// 	    int start = 0;
// 	    int end  = n -1;
	    
	    
// 	    while(start<end)
// 	    {
// 	    int mid = start - (end-start)/2;
// 	        if(arr[mid]==mid)
// 	        {
//                  return mid;
// 	        }
// 	        else if(arr[mid] > mid)
// 	        {
// 	            end = mid - 1;
// 	        }
// 	        else(arr[mid] < mid)
// 	        {
// 	            start = mid +1 ;
// 	        }
// 	    }
// 	    return mid;
