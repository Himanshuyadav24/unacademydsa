#include<iostream>
using namespace std;
int main()
{                
    //sorted and rotated array is given
    int arr[] = {3,4,5,6,1,2};
    
    //pivot is 6(whose index is 3)

    int n = sizeof(arr)/arr[0];
    int s = 0;
    int e = n-1;


    int mid = s+(e-s)/2;

    while(s<e)
    {       
        // checking the next number
        if(arr[mid]>arr[mid+1])
        {
            cout<< mid;
        }
        if(arr[mid]<arr[mid-1])
        {
            //checking the previous number                                
            cout<< mid-1;                                     
        }                                      
        if(arr[mid]<arr[0])                           
        {   //left                                          
            e=mid-1;                                      
        }                                              
        else
        {         
            //right                                   
            s = mid + 1;                                                     
        }                                                
            //mid update                         
        mid = s + (e-s)/2;                      
    }                         
                                     
    return 0;
}                                           