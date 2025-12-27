#include <bits/stdc++.h>
using namespace std;

int fibonnaci(int n){

    int i=0;
    int ans=i+1;
    
    for(i; i<n; i++) {
        cout << i << "-";
        ans = i+ans;
        i = ans;   
    }
    
    return 0;
}

int main() {

    return 0;
}