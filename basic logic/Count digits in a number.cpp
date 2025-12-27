#include <iostream>
#include <math.h>
using namespace std;

int countDigits(long long n){

    // brute force

//     int cnt=0;
//     while(n>0) {
//     n = n / 10;
//     cnt++;
//   }

    // optimal/better

    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main(){
    long long num;
    cin >> num;
    int ans = countDigits(num);
    cout << "Total number of digits: " << ans;
    return 0;
}