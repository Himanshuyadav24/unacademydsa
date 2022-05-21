#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {-2, 45, 0, 11, -9};

    cout<<"Before sorting"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    bool swapped;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }   
    }

cout<<endl<<"After sorting"<<endl;

for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}