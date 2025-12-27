#include <bits/stdc++.h>
using namespace std;

bool primeOrNot1(int n){
    // brute force
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool primeOrNot2(int n){
    // optimal , cause only iterates to root of n
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(primeOrNot1(n)){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
    cout << endl;
    if(primeOrNot2(n)){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
    return 0;
}