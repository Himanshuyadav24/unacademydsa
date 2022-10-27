#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> cat(26,"sfg");
    vector<int> cats(26,0);
    
    for(string &a : cat)
    {
        cats[a-'a']++;
    }
    for(int i = 0; i<cats.size(); i++)
    {
        cout<<cats[i]<<" ";
    }
}