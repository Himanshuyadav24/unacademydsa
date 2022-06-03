#include <iostream>
#include <map>
using namespace std;
int main()
{
    // ye char array hai
    char chars[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    // ye uski size hai
    int n = strlen(chars);

    // initialze count to 0
    int count = 0;

    // initialize index = 0;
    int i = 0;

    // initialize ans index = 0;
    int ansIndex = 0;
    while (i < n)
    {
        // ye next element check krega
        int j = i + 1;

        // equal hai kya next element?
        while (j < n && chars[i] == chars[j])
        {
            // agar equal hai to likewise aage vaale elements check krte rho
            j++;
        }
        // yaha kab aayga ya to pura array traverse kar liya
        // ya fir elment diff aagya
        // .
        // .
        // .

        // ye trick yaad rkhni hai
        // constant space me solution bnaya hai
        // chars array me hi character dhaale hai

        cout << "ansIndex is:- " << ansIndex;
        cout << ansIndex << endl;
        chars[ansIndex++] = chars[i];
        int count = j - i;

        if (count > 1)
        {
            // converting counting into a single digit and saving in answers
            // chalaak++
            // pyara solution create kar liya 
            // memorise karna
            // constant space me karna hai to
            string cnt = to_string(count);
            for (char ch:cnt)
            {
                chars[ansIndex++] = ch;
            }
        }

        // i piche se uthke aagye aajayga fir uske baad
        // j se next element ki bhi to counting start karni hai 
        i = j;
    }

    // for printing
    for (int i = 0; i < n; i++)
    {
        cout << chars[i] << " ";
    }

    return 0;
}
// maja to aagya bus solution yaad rahe
// please +++