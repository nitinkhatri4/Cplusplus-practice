#include<bits/stdc++.h>
using namespace std;

int sum(int n1, int n2) {
    int summ = n1 + n2;
    return summ;
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2);
    return 0;
}