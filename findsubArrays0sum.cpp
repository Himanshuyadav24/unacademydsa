#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{

    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;

    vector<int> prefixSum(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        prefixSum[i] = sum;
    }

    int count = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (prefixSum[i] == 0)
        {
            count++;
        }

        else if (m.find(sum)!=m.end())
        {
            count +=m[sum];
        }
        else
        {
        m[sum]++;
        }
    }
    cout<<count<<endl;
    return 0;
}