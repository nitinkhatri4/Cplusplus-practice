#include <bits/stdc++.h>
using namespace std;

int sumOfFirstNnumbers1(int sum, int n)
{
    if(n==0) return sum;

    sum += n;
    sumOfFirstNnumbers1(sum, n-1);
}

int sumOfFirstNnumbers2(int n){
    if(n==0) return 0;

    return n + sumOfFirstNnumbers2(n-1);
}

    int
    main()
{
    int n, sum = 0;
    cin >> n;
    int ans1 = sumOfFirstNnumbers1(sum, n);
    cout << ans1 << endl;
    int ans2 = sumOfFirstNnumbers2(n);
    cout << ans2;
    return 0;
}