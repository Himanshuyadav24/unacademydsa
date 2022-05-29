#include <iostream>
using namespace std;

// calling the bool fucntion
bool isPossibleSolution(int mid, int p, int n, int ranks[])
{
    int sum = 0;
    // this loop will give no. of paratha made in the specified time
    for (int i = 0; i < n; i++)
    {
        int time = mid;
        int k = 1;
        int count = 0;
        while(time>0)
        {
            time = time - k*ranks[i];
            if(time>=0)
            {
                count++;
                k++;
            }
        }
        sum += count;
    }
    if (sum < p)
        return false;
    else
        return true;
}

// search space function
int getMinimumTime(int ranks[], int p, int n)
{   
    int ans = 0;
    int s = 0;
    int e = (p * (p + 1) / 2);
    while (s <= e)
    {   
        cout <<"Yaha tak aagya"<<endl;
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
    int ranks[n];
    for (int i = 1; i <= n; i++)
    {
        ranks[i] = i;
    }

    // ans store
    // by calling the function
    int ans = getMinimumTime(ranks, p, n);

    // final answer print
    cout << "The ans is:- " << ans << endl;
    return 0;
}