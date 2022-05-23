#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};

    int n = 7;

    int sum = 0;

    int count = 0;

    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }

        sum += arr[i];

        if (sum == 0)
        {
            count++;
        }

        if (map[sum])
        {
            count += map[sum];
        }

        if (map[sum] == 0)
            map[sum] = 1;
        else
            map[sum]++;

        for (auto it = map.cbegin(); it != map.cend(); ++it)
        {
            std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
        }
    }

    cout << count;

    return 0;
}