#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {1,2,3,3,4,2,1};

    int i = 0;
    int j = 6;



    while(i<j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        cout<<"False"<<endl;
        
        i++;
        j--;
    }
    cout<<"True"<<endl;
    return 0;
}