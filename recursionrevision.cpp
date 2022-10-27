#include <iostream>
using namespace std;

//MERGE SORT


// void bubbleSort(int *arr, int n)
// {
//     //base case - already sorted
//     if(n==0 || n==1)
//     {
//         return ;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     bubbleSort(arr,n-1);
// }

// int main()
// {
//     int arr[] = {4,6,1,2,0,3};

//     bubbleSort(arr,6);

//     for (int i = 0; i <6; i++)
//     {
//         cout<<arr[i];
//     }
// }

// int power(int a, int b)
// {
//     //base case
//     if(b==0)
//     {
//         return 1;
//     }
//     if(b==1)
//     {
//         return a;
//     }

//     //RECURSIVE CALL
//     int ans = power(a,b/2);

//     //if b is odd
//     if(b&1)
//     {
//         return a * ans * ans;
//     }

//     else
//     {
//         return ans* ans;
//     }

// }

// int main()
// {
//     int a , b;
//     cin>>a>>b;

//     int ans = power(a,b);
//     cout<<"Answer is"<<ans<<endl;
//     return 0;
// }

// bool palindrome(string& name, int s , int e)
// {
//     //base case
//     if(s>e)
//     {
//         return true;
//     }

//     if(name[s]!=name[e])
//     {
//         return false;
//     }
//     else
//     {
//         return palindrome(name,s+1,e-1);
//     }
// }

// int main()
// {
//     string name = "abbccbba";
//     cout<<endl;
//     bool ans = palindrome(name,0,name.size()-1);
//     if(ans)
//     {
//         cout<<"Yes it is palindrome"<<endl;
//     }
//     else
//     {
//         cout<<"No, it is not palindrome"<<endl;
//     }
// }

// void reverse(int s, int e, string &name)
// {
//     // base case
//     if (s > e)
//     {
//         return;
//     }
//     swap(name[s], name[e]);
//     s++;
//     e--;
//     return reverse(s, e, name);
// }

// int main()
// {
//     string name = "himanshu";
//     int size = name.size();
//     reverse(0, size - 1, name);
//     cout << name << endl;

// }

// bool binarySearch(int *arr, int s, int e, int key)
// {
//     // base case
//     if (s > e)
//     {
//         return false;
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     else if (arr[mid] > key)
//     {
//         return binarySearch(arr, s, mid - 1, key);
//     }
//     else
//     {
//         return binarySearch(arr, mid + 1, e, key);
//     }
// }

// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 15};
//     int size = 7;
//     int key = 10;
//     bool ans = binarySearch(arr, 0, 6, key);

//     if (ans)
//     {
//         cout << "Present" << endl;
//     }
//     else
//     {
//         cout << "Not present" << endl;
//     }
// }

// bool Linearsearch(int *arr, int size, int key)
// {
//     // base case
//     if (size == 0)
//     {
//         return false;
//     }

//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingPart = Linearsearch(arr + 1, size - 1, key);
//         return remainingPart;
//     }
// }
// int main()
// {
//     int arr[5] = {3, 5, 1, 2, 6};

//     int size = 5;

//     int key = 2;

//     bool ans = Linearsearch(arr, size, key);

//     if (ans)
//     {
//         cout << "Key is present" << endl;
//     }
//     else
//     {
//         cout << "Key is not present" << endl;
//     }
// }

// int getSum (int *arr, int size)
// {
//     //base case
//     if(size == 0)
//     {
//         return 0;
//     }
//     if(size == 1)
//     {
//         return arr[0];
//     }

//     int remainingPart = getSum(arr+1,size-1);

//     int sum = arr[0] + remainingPart;
//     return sum;

// }

// int main()
// {
//     int arr[] = {3, 1, 5, 6, 7};
//     int size = 5;

//     int sum = getSum(arr,size);
//     cout << "The sum of the array is " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isSorted(int *arr, int size)
// {
//     // base case
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }

//     if(arr[0]>arr[1])
//     {
//         return false;
//     }

//     else
//     {
//         // cout<<"First element is"<<arr[0]<<"& last element is"<<arr[size-1]<<endl;
//         bool remainingpart = isSorted(arr+1,size-1);
//         return remainingpart;
//     }

// }

// int main()
// {
//     int arr[5] = {1, 4, 6, 8, 10};

//     int size = 5;

//     bool ans = isSorted(arr, size);
//     if (ans)
//     {
//         cout << "Array is sorted" << endl;
//     }
//     else
//     {
//         cout << "Array is NOT sorted" << endl;
//     }
//     return 0;
// }