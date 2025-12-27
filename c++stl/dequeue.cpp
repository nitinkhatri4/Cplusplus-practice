#include <bits/stdc++.h>
using namespace std;

void Deque(){
    // declaration
    deque<int> dq;

    // insert
    dq.push_back(4);
    dq.emplace_front(2);
    dq.emplace_front(1);

    for(auto it: dq) {
        cout << it << " ";
    }
    cout << endl;

    // pritn front and back
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    // pop back and even front element
    dq.pop_back();
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it << " ";
    }

    // all other functions are same as vectors, and list
    // begin, end, swap, rend, rbegin, clear, insert, size, swap
}

int main() {

    Deque();
    return 0;
}