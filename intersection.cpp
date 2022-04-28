#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};

    int arr1[6] = {3,4,5,6,7,8};

    int i = 0;
    int j = 0;
    int k = 0;

    int intersecArray[6];
    
    while(i<8 && j<6 && k<6)
    {
        if(arr[i]==arr1[j])
        {
            intersecArray[k] = arr[i];
            i++;
            j++;
            k++;
        }
        if(arr[i]<arr1[j])
        {
            i++;
        }
        if(arr1[j]<arr[i])
        {
            j++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<intersecArray[i]<<" ";
    }
    
    return 0;
}