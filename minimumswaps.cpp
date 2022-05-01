#include <iostream>
using namespace std;

int minSwap(int arr[], int size, int k)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] >= k && arr[j] <= k)
            {
                swap(arr[i], arr[j]);
                count++;
            }
        }
        count--;
        cout << count;
        return count;
    }
}

    int main()
    {
        int arr[8] = {232, 4, 1, 65, 76, 3, 0, 42};

        int k = 5;

        minSwap(arr, 8, k);

        return 0;
    }