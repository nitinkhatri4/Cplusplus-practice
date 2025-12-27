#include <bits/stdc++.h>
using namespace std;

void Queue()
{
    // declaration
    queue<int> q;
    
    // push elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    
    //// other fucntions

    // size
    cout << q.size() << endl;

    // empty
    cout << q.empty() << endl;

    // front
    cout << q.front() << endl;

    // back
    cout << q.back() << endl;

    // traverse

    queue<int> dumq(q);

    while(!dumq.empty()) {
        cout << dumq.front() << " ";
        dumq.pop();
    }    
}

int main()
{

    Queue();
    return 0;
}