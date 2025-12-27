#include <iostream>
#include <vector>
using namespace std;

// // // brute force

// vector<int> rearrangeElements(vector<int>& nums) {
//     vector<int> pos; 
//     vector<int> neg;

//     for(int i=0; i<nums.size(); i++){
//         if(nums[i] > 0){
//             pos.push_back(nums[i]);
//         } else{
//             neg.push_back(nums[i]);
//         }
//     }

//     for(int i=0; i<nums.size()/2; i++) {
//         nums[2*i] = pos[i];
//         nums[2*i+1] = neg[i];
//     }

//     return nums;
// }


// // // optimal approach
vector<int> rearrangeElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);
    int pos = 0, neg = 1;

    for(int i=0; i<n; i++) {
        if(nums[i] > 0) {
            ans[pos] = nums[i];
            pos += 2;
        } else {
            ans[neg] = nums[i];
            neg += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> v1 = {3,1,-2,-5,2,-4};
    vector<int> v2 = {1,2,-3,-1,-2,3};

    vector<int> ans1 = rearrangeElements(v1);
    cout << "Reaaranged array: ";
    for(auto it: ans1) {
        cout << it << " ";
    }
    cout << endl;
    vector<int> ans2 = rearrangeElements(v2);
    cout << "Reaaranged array: ";
    for(auto it: ans2) {
        cout << it << " ";
    }
    return 0;
}