#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int arr[], int n){
    int i=0;
    int j=n-1;
    int temp;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int it=0; it<n; it++){
        cout << arr[it] << " ";
    }
}

int main(){
    int arr[5] = {8,4,6,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseAnArray(arr, n);

    // delete[] arr;
    // arr = nullptr;   /// considered as good practice

    return 0;
}