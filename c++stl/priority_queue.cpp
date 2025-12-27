#include <bits/stdc++.h>
using namespace std;

void Priority_queue()
{
    // declaration
    priority_queue<int> pq;

    pq.push(2);
    pq.push(10);
    pq.push(1);
    pq.push(5);
    cout << pq.top() << endl;

    // maximum heap, the above one

    // for minimum heap do

    priority_queue<int, vector<int> , greater<int>> pqm;

    pqm.push(10);
    pqm.push(1);
    pqm.push(5);
    pqm.push(13);

    cout << pqm.top() << endl;

}

int main()
{

    Priority_queue();
    return 0;
}