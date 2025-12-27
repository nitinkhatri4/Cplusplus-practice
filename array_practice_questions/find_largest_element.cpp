#include <iostream>
using namespace std;

int largestEle(int arr[], int n){

    int ele = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>ele){
            ele = arr[i];
        }
    }

    return ele;
}

int main(){

    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = largestEle(arr, n); 
    cout << "The largest element is " << ans;
    return 0;
}