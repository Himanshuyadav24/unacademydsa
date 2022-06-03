#include <iostream>
#include <vector>
#include <map>
using namespace std;

int maxInMap(map<char, int> m)
{
    pair<char, int> p;
    int maxe = 0;
    for (auto i : m)
    {
        if (maxe < i.second)
        {
            p = make_pair(i.first, i.second);
            maxe = i.second;
        }
    }
    return p.first;
}
int main()
{

    string str = "output";

    map<char, int> map;
    int max = 0;
    int result = 0;
    char ch;
    for (int i = 0; i <= 8; i++)
    {
        map[str[i]]++;
        if (max < map[str[i]])
        {
            max = map[str[i]];
            result = str[i];
            cout<<result<<endl;
            ch = i +'a'+1;
        }
    }

        for (auto it : map)
        {
            cout << it.first << " " << it.second << endl;
        }

        // khud khel raha hu
        //  int maxi = 0;
        //  cout<<"size of map is "<<map.size()<<endl;
        //  cout<<"yaha tak aagya"<<endl;
        //  for (int i = 0; i < map.size()-1; i++)
        //  {
        //      // cout<<i<<"th value of map is "<<endl;
        //      cout<<map[str[i]];
        //  }

        // int max = 0;
        cout << "maximum element in a string is " <<ch;

        return 0;
}