#include <bits/stdc++.h>
using namespace std;

// string checkPalindrome1(string &s, int start, int end) {
    
//     if(start > end){
//         return s;   
//     }

//     char temp = s[start];
//     s[start] = s[end];
//     s[end] = temp;

//     return checkPalindrome(s, start+1, end-1);
// }

bool checkPlaindrome2(string s, int i, int n) {
    if (i >= n/2){
        return true;
    }

    if(s[i]!=s[n-i-1]){
        return false;
    }

    return checkPlaindrome2(s, i+1, n);
}

int main() {
    string s;
    getline(cin, s);
    // string original = s;

    // string ans = checkPalindrome1(s, 0, s.size()-1);
    // if (original == ans){
    //     cout << "String is a palindrome";
    // }else {
    //     cout << "String is not a palindrome";
    // }

    if(checkPlaindrome2(s, 0, s.size()))
    cout << "Palindrome";
    
    else
    cout << "Not Palindrome";

    return 0;
}