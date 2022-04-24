#include<iostream>
using namespace std;
int main()
{
    //find weather it is power of 4 or not
    //if yes then print yes
    //otherwise print no
    
    int n ;
    cout<<"Please enter the number"<<endl;
    cin>>n;

    if(n<=0)
    {
        cout<<"No"<<endl;
    }

    int count = 0;
    int p =0;
    while (n!=0)
    {
        int ans= n&1 ;
        if (ans==1)
        {
            p++;
        }

        n= n>>1;
        count++; 
    }
    count--;
     if ((p==1)&&(count%2==0))
        {
            cout<<"yes This is a power of 4";
        }
        else
        {
            cout<<"No This is not a power of 4";
        }
    return 0;
}