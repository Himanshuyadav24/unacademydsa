#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[i]);
            }
            if (arr[j] == 1)
            {
                swap(arr[j], arr[i]);
            }
            if (arr[j] == 2)
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main()
{
    cout << "NON SORTED ARRAY" << endl;
    int arr[5] = {1, 1, 2, 0, 1};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "SORTED ARRAY in 0,1 and 2 " << endl;
    sortArray(arr, 5);
    printArray(arr, 5);

    return 0;
}