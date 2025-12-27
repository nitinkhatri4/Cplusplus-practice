#include <bits/stdc++.h>
using namespace std;

void rotateArrByOne(int arr[], int n) {
    int temp = arr[0];
    for(int i=0; i<n; i++) {
        if(i != n-1) {
            arr[i] = arr[i+1];
        }else {
            arr[i] = temp;
        }
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateArrByOne(arr, size);
    return 0;
}