#include<iostream>
using namespace std;
int main()
{
    // int i = 5;

    // //reference variable
    // int &j = i;

    // cout<<i++<<endl;

    // cout<<j++<<endl;

    // cout<<i<<endl; 

    // //dynamic array

    // int n ;
    // cout<<

    int n;
    cin>>n;

    int **arr = new int * [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int [n];
    }

    for (int j = 0; j < n; j++)
    {
        // cout<<arr[i][j];
    }
    
    

    return 0;
}