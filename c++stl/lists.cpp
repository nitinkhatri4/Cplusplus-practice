#include <bits/stdc++.h>
using namespace std;

void lists(){

    // declaration

    list<int> ls;

    ls.push_back(4);
    ls.emplace_back(5);

    ls.push_front(3);
    ls.push_front(2);
    ls.emplace_front(1);

    for(auto it: ls) {
        cout << it << " ";
    }
    cout << endl;

    // rest of the fucntions are same as vector
    // push_front and emplace_front are cheaper then vector's insert 
}

int main(){
    lists();
    return 0;
}