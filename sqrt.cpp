#include<iostream>
using namespace std;
int main()
{
    int n = 16;

    int arr[27] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
    
    int start = 0;
    int end = 26;

    int mid = start + (end-start)/2;

    while(start<end){

        if(mid*mid==n)
        {
            cout<<"Square root of "<<n<<" is "<<mid<<endl;
        }
        if(mid*mid<n)
        {
            start= mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    // return 0;
   
    
    
    
    
    
    
    return 0;
}