#include<iostream>
using namespace std;

int getSum(int arr[],int size, int k)
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < size; j++)
        {   
            if (arr[i]==arr[j])
            {
                continue;
            }
            
            if (arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
            
        }
        
    }
    return 0;
}


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int k = 10;

    getSum(arr,10,k);

    return 0;
}