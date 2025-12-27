#include <bits/stdc++.h>
using namespace std;

void print1toN(int cnt, int n){

    if(cnt>n) return;

    cout << cnt << " ";
    print1toN(cnt+1,n);
}

int main()
{
    int n, cnt = 1;
    cin >> n;
    print1toN(cnt, n);
    return 0;
}