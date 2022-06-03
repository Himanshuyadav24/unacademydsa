#include<iostream>
using namespace std;
int main()
{
    string s = "G";
    string x = "G";

    if(s.find(x))
    {
        cout<<s.find(x);
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}