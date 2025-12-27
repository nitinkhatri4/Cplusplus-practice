#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// // // brute force

vector<int> twoSum1(vector<int> nums, int target) {
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++) {
            int sum = nums[i] + nums[j];
            if(sum == target){
                return {i,j};
            }
        }
    }
    return {};
}

// // // better approach (using hashmap)

vector<int> twoSum2(vector<int> nums, int target) {
    unordered_map<int, int> mpp;
    
    for(int i=0; i<nums.size(); i++) {
        int val = target - nums[i];
        if(mpp.count(val)) {
            return {mpp[val], i};
        }
        mpp[nums[i]] = i;
    }
    return {};
}


int main() {
    vector<int> nums= {2,6,5,8,11};
    
    return 0;
}