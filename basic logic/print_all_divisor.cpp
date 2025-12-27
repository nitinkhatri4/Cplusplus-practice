#include <bits/stdc++.h>
using namespace std;

void printAllDivisors1(int n)
{
    // brute force
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
vector<int> printAllDivisors2(int n)
{
    // optimal approach
    vector<int> clc;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            clc.push_back(i);
            if (i != n / i)
            {
                clc.push_back(n / i);
            }
        }
    }
    return clc;
}

int main()
{
    int n;
    cin >> n;
    printAllDivisors1(n);
    cout << endl;
    vector<int> ans = printAllDivisors2(n);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}