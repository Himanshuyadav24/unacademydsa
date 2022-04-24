#include <iostream>
using namespace std;

int getSum(int arr[], int size, int k)
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            for (int h = j+1; h < 10; h++)
            {
                if (arr[i] == arr[j])
                {
                    continue;
                }
                if (arr[j] == arr[h])
                {
                    continue;
                }
                if (arr[i] == arr[h])
                {
                    continue;
                }

                if (arr[i] + arr[j] + arr[h] == k)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[h] << endl;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int k = 15;

    getSum(arr, 10, k);

    return 0;
}