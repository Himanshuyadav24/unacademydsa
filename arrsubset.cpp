#include <iostream>
using namespace std;
int main()
{
    int a1[] = {11, 1, 13, 21, 3, 7};
    int n = 6;

    int a2[] = {11, 3, 7, 1};
    int m = 4;

    sort(a1, a1 + n);
    sort(a2, a2 + m);

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a2[j] == a1[i])
            {
                count++;
                break;
            }
        }
    }

    if (count == m - 1)
    {
        cout << "Yes" << endl;
    }
}