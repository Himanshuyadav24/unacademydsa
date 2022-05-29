#include <iostream>
#include <algorithm>
using namespace std;

// calling the bool fucntion
int isPossibleSolution(int mid, int p, int n, int ranks[])
{
    int count = 0;
    // this loop will give no. of paratha made in the specified time
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int k = 1;
        while (sum + ranks[i]*k <= mid)
        {
            sum += ranks[i] * k;
            count++;
            k++;
        }
    }
   return count >= mid;
}

// search space function
int getMinimumTime(int ranks[], int p, int n)
{
    int ans = 0;
    int s = 0;
    int e = (p*(p + 1)) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossibleSolution(mid, p, n, ranks))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    // no of parratha
    int p = 10;

    // no of cooks
    int n = 4;

    // array of cook with ranks
    int ranks[4];
    for (int i = 0; i < 4; i++)
    {
        ranks[i] = i+1;
    }

    // ans store
    // by calling the function
    int ans = getMinimumTime(ranks, p, n);

    // final answer print
    cout << "The ans is:- " << ans << endl;
    return 0;
}