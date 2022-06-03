#include <iostream>
using namespace std;

char flip(char expected)
{   
    if(expected=='0')
    {
        return '1';
    }
    else
    {
        return '0';
    }
}
int getFlips(string a, char expected)
{                                                   
    int countFlips = 0;
    for (int i = 0; i < a.length(); i++)
    {                                          
        if (a[i] != expected)
        {                                  
            countFlips++;
        }
        expected = flip(expected);
    }                               
    return countFlips;
}

int main()
{
    string a = "01001001101";

    // ans starts with 0
    int ans0 = getFlips(a, '0');

    // ans starts with 1;
    int ans1 = getFlips(a, '1');

    int ans = min(ans0, ans1);
    cout << ans;
    return 0;
}