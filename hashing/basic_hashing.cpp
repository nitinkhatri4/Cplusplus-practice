#include <iostream>
using namespace std;

void basic_hash(int arr[], int q, int n) {
    int hash[16] = {0};
    
    // precomputing

    for(int i=0; i<n; i++) {
        hash[arr[i]]++;
    }

    // fetching

    while(q--){
        int num;
        cin >> num;
        cout << num << "->" << hash[num] << endl;
    }
}

int main() {
    int arr[8] = {4,3,1,6,7,1,4,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int query = 6;
    basic_hash(arr, query, size);
    return 0;
}