#include <iostream>
using namespace std;
void search(int arr[], int i, int size, int target)
{
    // base case
    if (arr[i] == target)
    {
        cout << "true";
    }

    if (i > size)
    {
        cout << "false";
    }

    search(arr, i + 1, 6, 7);
}
int main()
{
    int arr[] = {2, 4, 1, 7, 9, 0};
    int size = 6;
    int target = 7;
    int i = 0;

    search(arr, i, size, target);
    return 0;
}