#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[] = {1,0,0,1,0,1,1};

    int n = 7;

    int i = 0;
    int sum = 0;
    int count = 0;
    map<int,int>map;
    while(i<n)
    {
        if(arr[i]==0)
        {
            arr[i]= -1;
        }

        sum +=arr[i];

        map[sum]++;

        if(map[sum]==0)
        {
            count++;
        }
        i++;


    }

    cout<<count;

    return 0;
}