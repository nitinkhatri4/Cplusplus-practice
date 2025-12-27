#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n){
    int i=0;
    int j=i+1;

    while(j<n){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr1[] = {1,1,2,2,2,3,3};
    int arr2[] = {1,1,1,2,2,3,3,3,3,4,4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    removeDuplicates(arr1, size1);
    removeDuplicates(arr2, size2);
    return 0;
}