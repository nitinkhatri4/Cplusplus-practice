#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> mp;

    int arr[5] = {5,7,8,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        cout << it.first << "->" << it.second << endl;
    }

    cout << endl << endl;

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        cout << num << "->" << mp[num] << endl;
    }

    return 0;
}