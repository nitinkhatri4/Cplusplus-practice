#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int temp=n;
    int res=0;
    int len = to_string(n).length();
    while(temp>0){
        int ld=temp%10;
        res = res + pow(ld,len);
        temp=temp/10;
    } 
    return res==n;
}

int main(){

    int n;
    cin >> n;
    if(isArmstrong(n)){
        cout << "Armstrong";
    } else {
        cout << "Not Armstrong";
    }
    return 0;
}