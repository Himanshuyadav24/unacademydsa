#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5] = {1,1,2,3,2};
    
    vector<int>v;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==arr[i-1])
        {
            v.push_back(arr[i]);
        }
    }
    if (v.size()==0)
    {
        return -1;
    }


for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}


    return 0;
}