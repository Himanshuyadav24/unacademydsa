#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &arr, int time, int totalParatha)
{
    int paratha = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0,
            j = 1;
        while (sum + arr[i] * j <= time)
        {
            sum += arr[i] * j;
            paratha++;
            j++;
        }
    }
    return paratha >= totalParatha;
}
int getMinimumTime(vector<int> &arr, int totalParatha)
{
    // total cooks
    int cooks = arr.size();
    // sort(arr.begin(), arr.end());

    int s = 0;
    int e = arr[0] * ((totalParatha) * (totalParatha + 1)) / 2;
    int ans = 0;
    while (s <= e)
    {
        int time = s + (e - s) / 2;
        if (isPossible(arr, time, totalParatha))
        {
            ans = time;
            e = time - 1;
        }
        else
        {
            s = time + 1;
        }
    }
    return ans;
}
int main()
{
    // no. of testcases
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // no. of paratha
        int p;
        cin >> p;

        // no. of cooks
        int c;
        cin >> c;

        // vector in which ranks of cooks is specified
        vector<int> arr(c);
        // ranks of cooks
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
        }

        // is function me vector or total paratha input do
        int ans = getMinimumTime(arr, p);
        cout <<"Total "<<p<<" is made in "<< ans<<" minutes";
    }
    return 0;
}