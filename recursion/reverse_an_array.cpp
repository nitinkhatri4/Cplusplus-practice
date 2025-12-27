#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int arr[], int i, int n){
    
    if(i>n)
    return;

    int temp = arr[i];
    arr[i] = arr[n-1];
    arr[n-1] = temp;

    reverseAnArray(arr, i+1, n-1);
}

int main(){
    int arr[5] = {8,4,6,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseAnArray(arr, 0, n);

    for (int it = 0; it < n; it++)
    {
        cout << arr[it] << " ";
    }

    return 0;
}