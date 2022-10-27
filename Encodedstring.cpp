#include<iostream>
using namespace std;

int main()
{
    string str = "3[a]4[bc]";
    int n = str.length();

    string output;

    int i = 0;
    
    while(i<n && str[i]!= ']')
    {
        if(isdigit(str[i]))
        {
            cout<<"ha hai yaha par"<<i<<endl;
        }
        i++;
    }
    
return 0;
}