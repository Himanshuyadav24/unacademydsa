#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};

    int k = 5;

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of array is " << n << endl;

    sort(arr, arr + n);
    cout << "After sorted array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int mini = arr[0];
    cout << "Initial minimum value is " << mini << endl;

    int maxi = arr[n - 1];
    cout << "Initial maximum value is " << maxi << endl;

    int ans = maxi - mini;
    cout << "Initial answer is " << ans << endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0)
        {
            continue;
        }
        mini = min(arr[0] + k, arr[i] - k);
        maxi = max(arr[n - 1] - k, arr[i-1] + k);
        cout << "value of arr[i-1]+k is " << arr[i-1]+k<< endl;
        cout << "Value of mini is " << endl;
        cout << mini << endl;
        cout << "Value of maxi is " << endl;
        cout << maxi << endl;
        ans = min(ans, maxi - mini);
    }
    cout<<"Mini "<<mini<<endl;
    cout<<"Maxi "<<maxi<<endl;

    cout <<"Ans "<< ans;
    return 0;
}