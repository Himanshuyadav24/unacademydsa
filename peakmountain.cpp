#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1,4,10,9,5,2};

    int start = 0;
    int end = 5;

    int mid = start + (end-start)/2;
    while (start<end)
    {
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
        {
            cout<<"Peak element is "<<mid<<endl;
        }
        if(arr[mid]<=arr[mid+1])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    
    return 0;
}