#include <iostream>
#include <vector>
using namespace std;

int longestSubLength(vector<int> nums, int k) {
    // int tempLen = 0;
    int length = 0;

    for(int i=0; i<nums.size(); i++){
        int sum = 0;

        for(int j=i; j<nums.size(); j++){
            sum += nums[j];
            if(sum == k){
                length = max(j-i+1, length);
            }
        }
    }
    return length;
}

int main() {
    vector<int> nums = {10,5,2,7,1,9};
    int k = 15;
    int res = longestSubLength(nums, k);
    cout << "The longest substring length is: " << res;
    return 0;
}