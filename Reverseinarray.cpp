#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int size = 6;

    int arr[100]= {2,5,6,9,1,0};

    cout<<"The reversed array is: "<<endl;

    reverseArray(arr,size);

}