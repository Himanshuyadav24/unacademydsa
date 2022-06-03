#include<iostream>
using namespace std;
bool check(string a, string b)
{
    
    if(a.length()!=b.length())
    {
        return false;
    }


    //concatinate
    string temp = a+a;

    if(temp.find(b)==string::npos)
    {
        return false;
    }
    
    else
    {
        return true;
    }
}

int main()
{
    string a = "yadav";
    string b = "davya";

    cout<<check(a,b);

    return 0;
}