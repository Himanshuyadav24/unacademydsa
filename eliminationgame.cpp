#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;

    cout<<"Before reverse"<<endl;

    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }

    int s = 0;
    int e = 9;

    for(int i = s, j = e-1; i<=9/2; i++,j--)
    {
        swap(arr[s],arr[e]);
    }
    
    cout<<endl;

    cout<<"After reverse"<<endl;

    for(int i = 0; i<=size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}