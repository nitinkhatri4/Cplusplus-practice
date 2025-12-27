#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &nums) {
    for(auto it: nums){
        cout << it << " ";
    }
}

void sort012OrSortColours(vector<int> &nums) {
    int n = nums.size();

    // // // better approach

    // vector<int> mpp(3,0);
    // //frequency count
    // for(int i=0; i<nums.size(); i++) {
    //     mpp[nums[i]]++;
    // }

    // int x=0;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<mpp[i]; j++){
    //         nums[x] = i;
    //         x++;
    //     }
    // }

 
    // // // optimal (dutch flag algo)

    int low = 0;
    int mid = 0;
    int high = n-1;

    for(int i=0; i<n; i++) {
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++; 
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}



int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    sort012OrSortColours(nums);
    printArray(nums);

    return 0;
}