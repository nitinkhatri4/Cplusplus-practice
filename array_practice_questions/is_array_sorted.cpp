#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    int i=0;
    int j=i+1;
    while(j<n){
        if(arr[i] > arr[j]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 6, 7, 8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]); 

    if(isSorted(arr1, size1)){
        cout << "The first array is sorted.";
    }else {
        cout << "First array is not sorted.";
    }
    cout << endl;
    if(isSorted(arr2, size2)) {
        cout << "The second array is sorted.";
    }else {
        cout << "Second array is not sorted.";
    }
    return 0;
}