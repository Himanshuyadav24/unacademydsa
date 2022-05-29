#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{   
    vector<vector<int> >matrix;
    vector<int>v;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            v.push_back(1);
        }
        matrix.push_back(v);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    

    





    return 0;
}