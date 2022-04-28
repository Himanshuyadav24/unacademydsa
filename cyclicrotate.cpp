#include<iostream>
using namespace std;
void printArray(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
}
void cyclicRotate(int array[],int size)
{
   int x = array[size-1];
   for (int i = size-1; i > 0; i--)
   {
       array[i]=array[i-1];
   }
   array[0] = x; 
}
int main()
{
    int array[5] = {0,1,2,3,4};

    cyclicRotate(array,5);
    printArray(array,5);
}