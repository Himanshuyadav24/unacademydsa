#include <iostream>
#include <algorithm>
using namespace std;

bool isPossibleSolution(int ranks[], int totalparatha, int cooks, int mid)
{
    int paratha = 0;
    for (int i = 0; i < cooks; i++)
    {
        int sum = 0;
        int k = 1;
        while (sum + ranks[i] * k <= mid)
        {
            sum = sum + ranks[i] * k;
            paratha++;
            k++;
        }
    }
    return paratha >= totalparatha;
}

int getMinimumTime(int ranks[], int totalparatha, int cooks)
{
    sort(ranks, ranks + cooks);
    int s = 0;
    // all the parathas are made by only first cook
    int e = ranks[1] * ((totalparatha) * (totalparatha + 1)) / 2;
    int ans = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        // jo mid nikala hai check kro vo possible solution hai kya
        if (isPossibleSolution(ranks, totalparatha, cooks, mid))
        {
            ans = mid;
            // minimum nikalna hai isliy
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    cout << "No. of testcases:- " << endl;
    int testcase;
    cin >> testcase;

    while (testcase-- > 0)
    {
        cout << "No. of parathas:- " << endl;
        int totalparatha;
        cin >> totalparatha;

        cout << "No. of cooks:- " << endl;
        int cooks;
        cin >> cooks;

        // array of ranks of cooks
        int ranks[cooks];
        cout << "Enter the ranks of cooks:- " << endl;
        for (int i = 0; i < cooks; i++)
        {
            cin >> ranks[i];
        }

        int ans = getMinimumTime(ranks, totalparatha, cooks);

        cout << "Time required to making of " << totalparatha << " paratha's is " << ans << endl;
    }
    return 0;
}