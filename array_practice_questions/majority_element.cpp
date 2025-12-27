#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> &nums){
    int n = nums.size();

    // // // brute force

    // unordered_map <int, int> mpp;

    // for(auto x: nums){
    //     mpp[x]++;
    // }
    // n = n/2;
    // for(auto it: mpp){
    //     if(it.second > n){
    //         return it.first;
    //     }
    // }
    // return 0;

    
    // // // optimal (moore voting algo)

    int count = 0;
    int candidate = 0;

    for(auto num: nums){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        } else{
            count--;
        }
    }
    return candidate;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int ans = majorityElement(nums);
    cout << "Majority Element: " << ans;
    return 0;
}