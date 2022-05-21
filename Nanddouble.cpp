#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {-2, 0, 10, -19, 4, 6, -8};

    for (int i = 0; i < 7; i++)
    {

        for (int j = i+1; j < 7; j++)
        {
            if (arr[i] == 2 * arr[j])
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                cout << "Yes" << endl;
                break;
            }
        }
    }

    return 0;
}