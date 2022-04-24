#include<iostream>
using namespace std;

int duplicateElement(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
        
    }
    return 0;
}

int main()
{
    int arr[8] = {56,78,2,2,4,1,56,78};

    duplicateElement(arr,8);

    return 0;
}