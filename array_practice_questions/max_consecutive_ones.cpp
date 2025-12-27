#include <iostream>
#include <vector>
using namespace std;

int findMaxConsOnes(vector<int> nums) {
    int max1 = 0;
    int count = 0;

    for(auto it: nums){
        if(it == 1){
            count++;
            max1 = max(count, max1);
        } else{
            count = 0;
        }
    }
    return max1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto it : nums){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int res = findMaxConsOnes(nums);
    cout << "Max consecutive ones : " << res;
    return 0;
}
