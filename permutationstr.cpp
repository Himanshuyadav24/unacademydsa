#include <iostream>
using namespace std;

bool checkEqual (int count1[], int count2[])
{

    if(count1!=count2)
    {
        return 0;
    }
    return 1;
}


int main()
{
    string s1 = "ab";
    string s2 = "eidaoobo";

    // character count array
    int count1[26] = {};

    for(int i =0; i<s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowsizw = s1.length();

    int count2[26] = {};
    while(i<s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }


    if(checkEqual(count1,count2))
    {
        return 1;
    }

    //aage ka window process kro





    return 0;
}