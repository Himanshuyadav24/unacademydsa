#include <iostream>
using namespace std;
int main()
{
    string str = "abbaca";
    int len = str.length();
    cout << len << endl;
    int i = 0;
    bool flag = false;
    while (i < len && i>=0)
    {
        if (str[i] == str[i+1])
        {
            str.erase(i,i+1);
            flag = true;
        }
        if(true)
        i--;
        else
        i++;
    }

for (int i = 0; i < str.length(); i++)
{
    cout << str[i];
}

return 0;
}



// string removeDuplicates(string s) {
    //     int i=0;
    //     while(i<s.length())
    //     {
    //         if(s[i]==s[i+1]){
    //             s.erase(i,2);
    //             if(i!=0){
    //                 i--;
    //             }
    //         }
    //         else
    //             i++;
    //     }
    //     return s;
    // }