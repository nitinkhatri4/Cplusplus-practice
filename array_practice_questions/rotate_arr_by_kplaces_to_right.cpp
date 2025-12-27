#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// // // brute force

// void rotateArrByKPlaces(int arr[], int n, int k) {
//     k = k%n;

//     if(k>n) 
//     return;
//     vector<int> temp(k,0);
    
//     for(int i=0; i<n-k; i++) {
//         temp[i] = arr[i];
//     }
//     for(int i=n-k; i<n; i++){
//         arr[i-(n-k)] = arr[i];
//     }
//     for(int i=n-k-1; i<n; i++){
//         arr[i] = temp[i-(n-k-1)];
//     }

//     printArray(arr, n);
// }

// // // // optimal

void rotate(int arr[], int left, int right)
{
    while (left <= right)
    {
        int temp;
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

void rotateArrByKPlacesopt(int arr[], int n, int k)
{
    rotate(arr, 0, n - k - 1);
    rotate(arr, n - k, n - 1);
    rotate(arr, 0, n - 1);
    printArray(arr, n);
}

int main() {

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    //rotateArrByKPlaces(arr, size, 3);
    rotateArrByKPlacesopt(arr, size, k);
    return 0;
}