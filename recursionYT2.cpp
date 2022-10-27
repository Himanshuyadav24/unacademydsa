#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    //base case
    if(n==0)
    return;

    //processing
    int digit = n % 10;
    n = n/10;
    

    //recursive call
    sayDigit(n,arr);

    //print
    cout<<arr[digit]<<endl;

}

void reachHome(int src, int dest)
{
    // cout << "Source is " << src << " destination is " << dest << endl;
    // // base case
    // if (src == dest)
    // {
    //     cout << "Pahuch gaya" << endl;
    //     return;
    // }

    // // processing ek step aage badh jaao
    // //  src++;

    // // recursuve call
    // reachHome(src + 1, dest);
}

int main()
{
    // int dest = 10;
    // int src = 1;

    // reachHome(src, dest);

    int n;
    cin >> n;

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigit(n,arr);

    return 0;
}