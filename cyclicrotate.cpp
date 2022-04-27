#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void arrayRotate(int arr[],int size)
{
    int i = 0;
    int temp;
    while (i < size)
    {   
        temp = arr[i+1];
        arr[i+1]=arr[i];
        i++;
        arr[i+1]= temp;
        
    }
}
int main()
{
    int arr[7] = {0,1,2,3,4,5,6};

    arrayRotate(arr,7);
    printArray(arr,7);

    return 0;
}