#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {7,5,4,4,2};
    
    cout<<"Before sorting"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < 5; j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    
    cout<<"After sorting"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}