#include<iostream>
using namespace std;
int main()
{
    int arr[4] = {10,2,5,3};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if(arr[i]==2*arr[j])
            {
                cout<<"Yes"<<endl;
                break;
            }

        }
        
    }

    return 0;
}