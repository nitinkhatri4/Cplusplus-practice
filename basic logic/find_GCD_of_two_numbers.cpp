#include <bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2){

    // // brute force
    // int gcd;
    // for(int i=1; i<=min(n1,n2); i++) {
    //     if(n1%i==0 && n2%i==0) {
    //         gcd = i;
    //     }
    // }

    // // better
    // for(int i=min(n1,n2); i>0; i--) {
    //     if(n1 % i ==0 && n2 % i == 0){
    //         return i;
    //     }
    // }

    // optimal -> euclidean algo
    while(n1 > 0 && n2 > 0){
        if(n1>n2){
            n1 = n1%n2;
        }else{
            n2 = n2%n1;
        }
    }

    if(n1==0) return n2;
    else return n1;

    // return gcd;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;
    int ans = findGCD(num1, num2);
    cout << ans;
    return 0;
}