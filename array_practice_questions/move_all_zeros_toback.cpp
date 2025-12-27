#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// // brute force

// void moveZerosBack(int arr[], int n) {
//     vector<int> temp (n,0);

//     int x=0;
//     for(int i=0; i<n; i++){   

//         if(arr[i] != 0){
//             temp[x] = arr[i];
//             x++;
//         }
//     }
//     for(int i=0; i<n; i++){
//         arr[i] = temp[i];
//     }

//     printArray(arr, n);
// }

// // // // optimal

void moveZerosBackOPT(int arr[], int n) {

    int i=0;
    int j=0;

    while(j<n){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    printArray(arr, n);
}

int main() {

    int arr1[] = {1,0,2,3,0,4,0,1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {0,0,1,5,0,0,1};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
//    moveZerosBack(arr, size);
    moveZerosBackOPT(arr1, size1);
    moveZerosBackOPT(arr2, size2);
    return 0;
}