#include <iostream>
using namespace std;

void char_hash(string s, int n, int q) {

    // precomputing
    int hash[256] = {0};
    for(int i=0; i<n; i++) {
        hash[s[i]]++;
    }

    // fetching
    while(q--) {
        char ch;
        cin >> ch;
        cout << ch << "->" << hash[ch] << endl;
    }

}

int main() {
    string s = "abbcddfg";
    int size = s.size();    
    int query = 6;

    char_hash(s, size, query);
    return 0;
}