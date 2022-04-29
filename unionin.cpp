#include <iostream>
using namespace std;
int main()
{
    int array[7] = {0, 1, 2, 3, 4, 7, 9};
    int array1[2] = {0, 1};

    int i = 0;
    int j = 0;
    int k = 0;

    int unionArray[9];
    while (i < 7 && j < 2 && k < 9)
    {
        if(array[i]==array[i-1])
        {
            i++;
        }
        if(array1[j]==array1[j-1])
        {
            j++;
        }
        if (array[i] == array1[j])
        {
            unionArray[k] = array[i];
            k++;
            i++;
            j++;
        }
        if (array[i] < array1[j])
        {
            unionArray[k] = array[i];
            k++;
            i++;
        }
        if (array1[j] < array[i])
        {
            unionArray[k] = array1[j];
            k++;
            j++;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << unionArray[i] << endl;
    }

    return 0;
}