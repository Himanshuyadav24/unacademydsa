#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {111,222,333,444,555};

    for (int i = 0; i < 5; i++)
    {
        string str = to_string(arr[i]);
        
        cout<<"The string is "<<str<<endl;
        
        int m = str.size();
        cout<<"The size of string is "<<m<<endl;

    }
    












    return 0;
}