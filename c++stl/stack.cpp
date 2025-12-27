#include <bits/stdc++.h>
using namespace std;

void Stack() {
    // declaration

    stack<int> st;

    // push elements (goes in front position due to lifo)

    st.push(4);
    st.push(3);
    st.emplace(2);
    st.emplace(1);

    stack<int> dum(st);

    while(!dum.empty()) {
        cout << dum.top() << " ";
        dum.pop();
    }


    //  traversal or printing of stack happens like the above method, elements needs to be popped
    // TC of traversal is O(n) and rest operations have O(1)
}

int main() {

    Stack();
    return 0;
}