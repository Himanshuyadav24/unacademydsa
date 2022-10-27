#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<=0)
    {
        cout<<"No"<<endl;
    }

    int p = 0;
    int count = 0;

    while(n!=0)
    {   
        int ans = n&1;
        if(ans==1)
        {
            p++;
        }
        n = n>>1;
        count++;
    }
    count--;
    if((p==1)&&(count%2==0))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}