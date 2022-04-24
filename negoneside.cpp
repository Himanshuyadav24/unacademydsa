#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void moveNegative(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] < 0)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[6] = {2, -5, 6, -1, 3, -4};

    cout << "Normal Array" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array in which all negative numbers on one side of array is: " << endl;

    moveNegative(arr, 6);
    printArray(arr, 6);

    return 0;
}