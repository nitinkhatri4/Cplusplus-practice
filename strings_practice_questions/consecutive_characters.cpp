#include<iostream>
#include<string>
using namespace std;

// // //  optimal approach
int consecutiveChar(string s) {
    int n = s.size();

    int power = 1, count = 1;
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        power = max(power, count);
    }
    return power;
}

int main() {

    string s1 = "abbcccddddeeeeedcba";
    string s2 = "leetcode";

    int ans1 = consecutiveChar(s1);
    cout << "The power of the given string is: " << ans1;
    int ans2 = consecutiveChar(s2);
    cout << "The power of the given string is: " << ans2;

    return 0;
}