#include <bits/stdc++.h>
using namespace std;

void printNameNtimes(int cnt, int n){

    if(cnt==n) return;

    cout << "nitin" << endl;
    printNameNtimes(cnt+1, n);
}

int main(){
    int n, cnt=0;
    cin >> n;
    printNameNtimes(cnt, n);
    return 0;
}