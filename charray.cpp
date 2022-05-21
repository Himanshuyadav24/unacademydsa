#include<iostream>
using namespace std;

int getlength(char arr[])
{
    int length = 0;
    int i = 0;
    while(arr[i]!='\0')
    {
    length++;
    i++;
    }
    return length;
}


int main()
{
    //creation
    char name[10] = "babbar";

    //input
    // cin>>name;

    //output
    cout<<"name is "<<name<<endl;

    cout<<"length is "<<getlength(name);

    return 0;
}