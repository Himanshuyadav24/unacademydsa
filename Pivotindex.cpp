#include<iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int start = 0;
    int end = n -1;

    while(start<end)
    {
    int mid = start+(end-start)/2;

    if(arr[mid]>=arr[0])
    {
        start = mid+1;
    }
    else
        end = mid-1;
    }

    return start;
}
int main()
{
    int arr[6] = {1,7,3,6,5,6};

    cout<<"Pivot is "<<getPivot(arr,6)<<endl;

    return 0;
}