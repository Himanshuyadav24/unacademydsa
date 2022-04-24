#include<iostream>
using namespace std;
void LinearSearch(int arr[],int size, int k)
{
    int ans;
    for (int i = 0; i < size; i++)
    {
        
        if(arr[i]==k)
        {
             ans = 1;
            break;     
        }
        else
        {
             ans = 0;
        }
    }
    if (ans==1)
    {
        cout<<"It's present"<<endl;
    }
    else
    {
        cout<<"It's Not present"<<endl;
    }

    
}

int main()
{
    int size = 6;

    int arr[100] = {6,3,6,9,1,0};

    int k = 0 ;

    LinearSearch(arr,size,k);


    return 0;

}