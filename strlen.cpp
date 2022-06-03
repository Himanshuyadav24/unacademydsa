#include<iostream>
using namespace std;
int main()
{   
    string str = "1234567";
    int i = 0;
    while(str[i]!='\0')
    {
        i++;
    }
    cout<<i;
    return 0;
}