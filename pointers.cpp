#include<iostream>
using namespace std;

int func(int *p)
{
    p = p+1;
}
int main()
{

    // int a = 5;

    // int *p = &a;

    // cout<<sizeof(p)<<endl;;
    // cout<<&a<<endl;

    int a = 5;
    int *p = &a;

    cout<<"Before"<<endl<<p<<endl;
    cout<<"Before"<<endl<<*p<<endl;

    func(p);

    cout<<"After"<<p<<endl;
    cout<<"After"<<*p<<endl;








    return 0;
}