#include<iostream>
using namespace std;
 
// void printArray(int arr[], int size)
// {
//     arr[0]= 23;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
 
int main()
{

    int n;
    cout<<"Enter the number of element you want in your array: "<<endl;
    cin>>n;

    int arr[100] ;

    cout<<"Enter the Elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The elements are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    // int arr[3] = {3,6,9};

    // //calling a function
    // printArray(arr,3);

    // //printing in a array
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // return 0;


    //you get the same output because when you give the address of that element to the function 
    //index contain the base address 
    // when you change the element in that index it changes in the actual array
}