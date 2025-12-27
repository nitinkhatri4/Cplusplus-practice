#include <iostream>
#include <vector>
// #include <unordered_map>
using namespace std;

int main(){
    // unordered_map<int, int> mp;

    int arr[5] = {5,7,8,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> hash(9,0);
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<hash.size(); i++){
       if(hash[i]!=0){
        cout << i << "->" << hash[i];
        cout << endl;
       }
    }

    return 0;
}