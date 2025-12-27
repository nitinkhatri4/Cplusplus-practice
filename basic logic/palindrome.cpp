#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    if (n < 0)
    {
        return false;
    }

    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    
    return n==rev;
}

int main()
{
    int n;
    cin >> n;
    bool ans = ispalindrome(n);
    cout << ans;
    return 0;
}