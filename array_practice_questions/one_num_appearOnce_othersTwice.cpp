#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int x = 0;
    for(int i=0; i<nums.size(); i++){
        x = x ^ nums[i];
    }

    return x;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cout << "The single number that appears once is: " << singleNumber(nums);
    return 0;
}