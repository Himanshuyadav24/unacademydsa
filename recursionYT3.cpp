#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "size of array is " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int getSum(int arr[], int size)
{
    // base case
    //  if(size==0)
    //  return 0;

    // if(size==1)
    // return arr[0];

    // //recursive call
    // int remainingpart = getSum(arr+1,size-1);
    // int sum = arr[0] + remainingpart ;
    // return sum;
}

bool isSorted(int arr[], int size)
{
    // base case
    // if (size == 0 || size == 1)
    // {
    //     return true;
    // }

    // if (arr[0] > arr[1])
    // {
    //     return false;
    // }

    // // recursive call
    // else
    // {
    //     bool remainingpart = isSorted(arr + 1, size - 1);
    //     return remainingpart;
    // }
}
int main()
{
    // SORTED
    //  int arr[] = {2, 4, 6, 9, 11, 13};

    // int size = 6;

    // bool ans = isSorted(arr, size);

    // if (ans==true)
    // {
    //     cout << "Array is sorted " << endl;
    // }

    // else
    // {
    //     cout << "Array is not sorted" << endl;
    // }

    // GETSUM
    //  int arr[] = {3,2,5,1,6};
    //  int size = 5;

    // int ans = getSum(arr,size);

    // cout<<"The sum is "<<ans<<endl;

    // LINEAR SEARCH
    int arr[] = {3, 2, 5, 1, 6};
    int size = 5;
    int key = 6;

    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "It is present in given array" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}