#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maximum = max(arr[i],maximum);
           
    }
    cout<<"Maximum in array is: "<<maximum<<endl;
    
   return maximum;
}


int getMin(int arr[],int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        int mini = min(arr[i],minimum);
        minimum = mini;
    }
    cout<<"Minimum in array is: "<<minimum<<endl;

    return minimum;   
}


int main()
{
    int size = 6;

    int arr[100] = {99,3, 6, 1, 9, 0};

    getMax(arr, size);
        
    getMin(arr,size);

    return 0;
}