#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void swapAlternate(int arr[] , int size)
{
    for (int i = 0; i < size; i=i+2)
    {
        if (i+1 < size)  
        {
            swap(arr[i],arr[i+1]);
        }
    }    
}
int main()
{
    int even[6] = {3,6,9,1,2,56};

    int odd[5] = {10,2,56,12,0};

    cout<<"Normal even array is: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Odd array is: "<<endl;
    for (int j = 0; j < 5; j++)
    {
        cout<<odd[j]<<" ";
    }

    cout<<endl;

    cout<<"Reversed Even Array is: "<<endl;
    swapAlternate(even,6);
    printArray(even,6);

    cout<<"Reversed Odd Array is: "<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);

    return 0;
}