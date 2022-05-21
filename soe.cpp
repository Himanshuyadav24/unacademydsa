#include <iostream>
#include <vector>
using namespace std;

// bool isPrime(int n)
// {
//    for (int i =2; i*i<= n; i++)
//    {
//        if(n%i==0)
//        {
//            return false;
//        }
//    }
//    return true;
// }

int soe(int n)
{
    int cnt = 0;
    vector<bool> prime(n+1,true);
    prime[0] = prime [1] = false;

    for(int i = 2 ; i<n; i++)
    {
        if(prime[i])
        {
            cnt++;
        }
        
        if(prime[i])
        {
        for (int j = 2*i; j <n; j=j+i)
        {
            prime[j]= 0;
        }
        }
        
    }
    return cnt;
}
int main()
{
    int n = 30;

    // int count = 0;

    // for (int i = 2; i < n; i++)
    // {
    //     if (isPrime(i)==true)
    //     {
    //         count++;
    //     }
    // }

    cout << "The number of prime in between 1 to " << n << " is " << soe(n) << endl;

   

    return 0;
}