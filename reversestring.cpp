#include<iostream>
#include<vector>
using namespace std;
int reverc( vector<char> &line, int s, int e)
{
    for (int i = 0; i < e/2; i++)
    {
        swap(line[s],line[e]);
    }
    
}
int main()
{
    vector<char> line= {"h","e","l","l","o"};

    int s = 0;
    int e = line.length()-1;


    revrec(line,s,e);
    
    return 0;
}