#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    // optimal approach

    int rev = 0;
    while(n>0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int num;
    cin >> num;
    int ans = reverse(num);
    cout << ans;
    
    return 0;
}