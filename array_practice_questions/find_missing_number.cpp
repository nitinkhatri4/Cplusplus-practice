#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> nums) {
    int n = nums.size();

    int sum = (n*(n+1))/2;
    int sum2=0;
    for(auto it: nums){
        sum2 += it;
    }

    return sum - sum2;
}

int main(){
    vector<int> nums = {0,1,3};
    int ans = findMissingNumber(nums);
    cout << "the missing number is: " << ans;
}