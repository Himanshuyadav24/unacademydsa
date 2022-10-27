#include <iostream>
using namespace std;

int optimalStrategy(int arr[], int i, int j)
{
    // base case
    if (i > j)
        return 0;

    int choice1 = arr[i] + min(optimalStrategy(arr, i + 2, j), optimalStrategy(arr, i + 1, j - 1));

    int choice2 = arr[j] + min(optimalStrategy(arr, i + 1, j - 1), optimalStrategy(arr, i, j - 1));

    int ans = max(choice1, choice2);

    return ans;
}

int main()
{
    int arr[] = {20, 30, 2, 2, 2, 10};

    int i = 0;

    int j = 5;

    cout << "Ans is " << optimalStrategy(arr, i, j) << endl;

    return 0;
}


//expect the winner
// class Solution { 
// private:
//     int game(vector<int>& nums, int s, int e)
//     {
//         //base case
//         if(s>e)
//         {
//             return 0;
//         }
        
//         int choice1 = nums[s] + min(game(nums,s+2,e),game(nums,s+1,e-1));
//         int choice2 = nums[e] + min(game(nums,s+1,e-1),game(nums,s,e-2));
        
//         return max(choice1,choice2);   
//     }
// public:
//     bool PredictTheWinner(vector<int>& nums) {
        
//         int n = nums.size();
        
//         int score1 = game(nums,0,n-1);
        
//         int totalsum = 0;
        
//         for(int i = 0; i<n; i++)
//         {
//             totalsum = totalsum + nums[i]; 
//         }
        
//         if(score1>=totalsum-score1)
//         {
//             return true;
//         }
        
//         return false;
//     }
// };