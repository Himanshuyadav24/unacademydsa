#include<iostream>
using namespace std;
int main()
{

    int arr[6] = {4,2,2,1,1,3};

    int count = 1;
    int temp[100] = {};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        temp[i] = count;
    }

    
    

   for (int i = 0; i < 10; i++)
   {
       if (temp[i]==temp[i+1])
       {
           cout<<"False"<<endl;
           break;
       }
       else
       {
           cout<<"True"<<endl;
           
       }
   }

   
    return 0;
}