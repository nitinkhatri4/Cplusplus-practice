#include <bits/stdc++.h>
using namespace std;

void print1toN(int cnt, int n) {
    if (n < cnt)
        return;

    cout << n << " ";
    print1toN(cnt, n-1);
}

int main() {
    int n, cnt = 1;
    cin >> n;
    print1toN(cnt, n);
    return 0;
}