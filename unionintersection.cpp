#include <iostream>
using namespace std;

void printArray(int arr3[], int size3)
{
    // cout << "Union of these Arrays is :" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << arr3[i] << " ";
    }
    cout<<endl;
}

int intersectionArray(int arr1[], int size1, int arr2[], int size2,int arr3[],int size3)
{
    int i = 0, j = 0,k=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]==arr2[j])
        {
            arr3[k]=arr2[j];
            k++;
        }
        i++;
        j++;
        
    }
    for (int i = 0; i < k; i++)
    {
         cout<<arr3[k]<<" ";
    }
    
    return 0; 
}
void unionArray(int arr1[], int arr2[], int size1, int size2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}


int main()
{
    int arr1[6] = {2, 4, 6, 8, 10, 12};
    int arr2[6] = {3, 6, 9, 12, 15, 18};

    int arr3[12];

    unionArray(arr1, arr2, 6, 6, arr3);
    printArray(arr3, 12);

    intersectionArray(arr1, 6, arr2, 6, arr3, 12);
    // printArray(arr3, 12);

        return 0;
}