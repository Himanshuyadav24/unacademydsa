#include<iostream>
using namespace std;
void func1(int **q)
{
    q = q+1;
}
void func2(int **q)
{
    *q = *q+1;
}
void func3(int **q)
{
    **q = **q+1;
}
int main()
{

    int a = 5;

    int* p = &a;

    int **q = &p;

    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<*a<<endl;

    // cout<<&p<<endl; //address of  p
    // cout<<p<<endl;//address of a
    // cout<<*p<<endl;//5

    // cout<<&q<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;


//  homework teeno function checkk krne hai

    // cout<<"Before"<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // func1(q);
    // cout<<"after"<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    int  a[4] = {1,2,3,4};
    int *p = a++;
    cout<<*p<<endl;


    cout<<"Sab sahi chal rha hai"<<endl;

    return 0;
}