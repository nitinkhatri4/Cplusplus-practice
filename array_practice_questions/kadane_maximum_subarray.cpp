#include<iostream>
#include<vector>
using namespace std;

// // // brute force

// int maxSubarray(vector<int> &nums) {
//     int n = nums.size();

//     int maxSum = INT_MIN;
    
//     for(int i=0; i<n; i++) {
//         int sum = 0;
//         for(int j=i; j<n; j++) {
//             sum += nums[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     return maxSum;
// }

// // // optimal approach O(n) (kadane's algorithm)
int maxSubarray(vector<int> &nums) {
    int n = nums.size();

    int maxSum = nums[0], currSum = 0;
    for(int i=0; i<n; i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        
        if(currSum < 0) {
            currSum = 0; // if found any negative sum, leave that element by resetting the current element.
        }
    }

    return maxSum;
}

int main(){
    vector<int> v1 = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> v2 = {5,4,-1,7,8};

    int ans1 = maxSubarray(v1);
    int ans2 = maxSubarray(v2);

    cout << "The max subarray sum is: " << ans1 << endl;
    cout << "The max subarray sum is: " << ans2;
    return 0;
}