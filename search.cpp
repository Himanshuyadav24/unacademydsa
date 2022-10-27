#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {3,5,1,7,8,0};
    int size = 6;
    int target = 7;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target)
        {
            cout<<"yes"<<endl;
            break;
        }
    }
    // break;
    cout<<"No"<<endl;
}