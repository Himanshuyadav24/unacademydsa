#include <iostream>
using namespace std;
int main()
{
    int a[6] = {85, 25, 1, 32, 54, 6};
    int b[2] = {85, 2};

    cout << "Before sorting" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << "After sorting" << endl;

    sort(a, a + 6);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    int i = 0, j = 0;
    int count = 0;
    while (i < 6 && j < 2)
    {
        if (a[i] < b[j])
        {
            count++;
            ;
            i++;
        }
        if (b[j] < a[i])
        {
            count++;
            j++;
        }
        if (a[i] == b[j])
        {
            i++;
            j++;
            count++;
        }
    }
    while (i < 6)
    {
        i++;
        count++;
    }

    while (j < 2)
    {
        j++;
        count++;
    }
    cout << "The numbers in union count is:- " << endl;
    cout << endl
         << count << " union counts";

    return 0;
}