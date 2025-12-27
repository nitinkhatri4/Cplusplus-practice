#include <bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int, int> p1 = {1,3};
    cout << p1.first << " " << p1.second << endl;
    
    pair<char, pair<int, int>> p2 = {'a', {1,2}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<char, pair<int, pair<char, float>>> p3 = {'a', {1, {'b',0.22}}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second.first << " " << p3.second.second.second << endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[2].first;
}

int main(){
    pairs();
    return 0;
}