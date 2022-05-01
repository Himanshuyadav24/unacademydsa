#include <iostream>
using namespace std;
void Transpose(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void Reverse(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for 90 degree rotation.
    Transpose(arr, 3, 3);
    Reverse(arr, 3, 3);
    // for 180 degree rotation.
    Transpose(arr, 3, 3);
    Reverse(arr, 3, 3);
    // for 270 degree rotation.
    Transpose(arr, 3, 3);
    Reverse(arr, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}