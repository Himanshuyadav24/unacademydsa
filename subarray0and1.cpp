#include <iostream>
#include <unordered_map>
using namespace std;

int findlargestSubarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }

    unordered_map<int, int> map;

    int sum = 0;
    int ans = 0;

    map[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (map.count(sum))
        {
            ans += map[sum];
        }
        map[sum]++;
    }
    return ans;
}

int main()
{
    int arr[] = {1,0,0,1,0,1,1};

    int n = sizeof(arr) / sizeof(int);

    cout<<findlargestSubarray(arr, n);
    return 0;
}