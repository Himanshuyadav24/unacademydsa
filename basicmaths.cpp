#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// int soe(int n)
// {
//     int count = 0;

//     // saare elements ko shuru me prime maan liya or isme store kara liya
//     vector<bool> prime(n + 1, true);

//     // 0 and 1 ko non prime mark kardo
//     prime[0] = prime[1] = false;

//     // tablewise non prime mark kardo
//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//             count++;

//         // 2*i se 3*i karne ke liye j = j + i karna pdega
//         for (int j = 2 * i; j < n; j = j + i)
//         {
//             prime[j] = 0;
//         }
//     }
//     return count;
// }


// int main()
// {
//     int n = 30;

//     cout << "count is " << soe(n) << endl;

//     return 0;
// }

int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a = 14;
    int b = 8;

    cout<<"Greatest common divisor:- "<<gcd(a,b);

    return 0;
}