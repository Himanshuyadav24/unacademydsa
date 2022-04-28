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
    int arr[5] = {1,3,4,2,2};

    duplicateElement(arr,5);

    return 0;
}