#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}

void vectors(){

    // declaration
    vector<int> v;  // an empty container

    v.push_back(1);
    v.emplace_back(2);
    cout << v[1] << endl;

    // in pairs
    vector<pair<int,int>> vt;
    vt.push_back({1,2});
    vt.emplace_back(3,4);  // different from push_back, missing curly braces

    // some more declarations
    vector<int> vv(5,100);   // all values are 100 and the size is 5 of the vector
    vector<int> vv2(5);  // vector of size 5 but has either 0 or garbage values
    cout << vv2[4]  << " , it is printing 0"<< endl;  // prints 0
    
    // copying
    vector<int> v1(5,20);
    vector<int> v2(v1);
    cout << v2[4] << " using indexing." << endl;

    /////  iterators in vector to access the values //////

    vector<int> vec = {10,15,5,20,25};

    // using .back()to access the last element

    cout << vec.back() << " last element using .back()" << endl;

    // basic syntax

    vector<int>::iterator it1 = vec.begin(); // gets the memory of begining vector element and stores it in 'it'
    cout << *it1 << " gets first value of the vector 'vec'." << endl;

    // other iterators 
    vector<int>::iterator it2 = vec.end()-1;  // always decrease the end cuasae the end points to the memory right after the last element.
    cout << *it2 << " gets the last value of the vector 'vec'." << endl;

    // vec.rend(), vec.rbegin(), similar to the first ones, but works in reverse order

    ////// printing the vector //////

    // using for loop
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // using for loop but with 'auto' keyword
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // using for each loop
    for(auto it: vec) {
        cout << it << " ";  // notice we dont require to write '*' as in for each the iterator 'it' holds the values of the range i.e vector 'vec'
    }
    cout << endl;

    ////// erase or deletion in vectors //////

    vector<int> vec1 = {1,2,3,4,5};

    vec1.erase(vec1.begin());   // at position, single element
    printVector(vec1);

    vec1.erase(vec1.begin()+1, vec1.begin()+3);   // from a range, last is exclusing [start, end)
    printVector(vec1);

    ///// insertion using insert //////

    vector<int> vec2 = {1,2,3,4,5};
    
    vec2.insert(vec2.begin(), 6);  // position, value
    vec2.insert(vec2.begin()+2, 2, 7); // position, times, value
    vector<int> copy = {50,50};
    vec2.insert(vec2.end(), copy.begin(), copy.end()); // position, from , to , from a given container or list or range

    printVector(vec2);

    // remember insert is a costly operation in vector

    //////  some other functions  //////

    // size
    cout << vec1.size() << " size of vector." << endl; 

    // delete last element
    vec2.pop_back();
    printVector(vec2);

    // clear entire vector
    vector<int> dummy = {1,2,3};
    dummy.clear();

    // is empty check
    cout << vec2.empty() << endl;
    cout << dummy.empty() << endl;

    // swap
    vec1.swap(dummy);
    printVector(vec1);
    printVector(dummy);
}

int main(){
    vectors();
    return 0;
}