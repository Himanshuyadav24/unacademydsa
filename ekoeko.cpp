#include <iostream>
using namespace std;

int isPossibleSolution(int mid, int arr[], int n, int target)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = 0;
        if(arr[i]>mid)
        {
        diff = arr[i] - mid;
        }
        sum = sum + diff;
    }

    if (sum >= target)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int getMaxHeightOfSaw(int arr[], int size, int target)
{
    int n;
    n = size;
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n - 1];
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <=e)
    {
        if (isPossibleSolution(mid, arr, n, target))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int arr[] = {20,15,10,17};
    int target = 7;
    int size = sizeof(arr) / sizeof(int);

    int ans = getMaxHeightOfSaw(arr, size, target);

    cout << "Ans is " << ans << endl;

    return 0;
}