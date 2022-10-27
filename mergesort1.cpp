#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;

    int leftPart = mid - s + 1;

    int rightPart = e - mid;

    // create left and right parts
    int *left = new int[leftPart];
    int *right = new int[rightPart];

    // copy into the left array
    int originalIndex = s;
    for (int i = 0; i < leftPart; i++)
    {
        left[i] = arr[originalIndex++];
    }

    // copy into the right array
    originalIndex = mid + 1;
    for (int i = 0; i < rightPart; i++)
    {
        right[i] = arr[originalIndex++];
    }

    // now we have two sorted array
    // we have to merge them

    int leftIndex = 0;
    int rightIndex = 0;
    originalIndex = s;

    while (leftIndex < leftPart && rightIndex < rightPart)
    {
        if (left[leftIndex] <= right[rightIndex])
        {
            arr[originalIndex++] = left[leftIndex++];
        }
        else
        {
            arr[originalIndex++] = right[rightIndex++];
        }
    }

    // check if any more element is present in a array and then copy it to original array
    while (leftIndex < leftPart)
    {
        arr[originalIndex++] = left[leftIndex++];
    }

    // check if any more element is present in a array and then copy it to original array
    while (rightIndex < rightPart)
    {
        arr[originalIndex++] = right[rightIndex++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // left part
    mergeSort(arr, s, mid - 1);

    // right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};

    int size = 6;

    mergeSort(arr, 0, size - 1);

    return 0;
}