#include <iostream>
using namespace std;
int main()
{
    int row = 3, col = 4;
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int total = row * col;

    int sr = 0;
    int ec = col-1 ;
    int er = row-1 ;
    int sc = 0;

    int count = 0;

    cout<<"spiral index is:-"<<endl;

    //har for loop me do condition check hogi
    while (count<total)
    {
        // first part
        for (int i = sc; i <=ec; i++)
        {
            cout << arr[sr][i] << " ";
            
        }
        sr++;
        count++;
        
        // second part
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " ";
        }
        ec--;
        count++;
        // Third part
        for (int i = ec; i >=sc; i--)
        {
            cout << arr[er][i] << " ";
        }
        er--;
        count++;
        // Fourth part
        for (int i = er; i >=sr; i--)
        {
            cout << arr[i][sc] << " ";
        }
        sc++;
        count++;
    }
    return 0;
}
