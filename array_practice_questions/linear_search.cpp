#include<iostream>
using namespace std;

int linear_search(int arr[], int num, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == num) {
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 3;
    int ans = linear_search(arr, num, size);
    cout << ans;
    return 0;
}