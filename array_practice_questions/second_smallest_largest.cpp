#include <bits/stdc++.h>
using namespace std;

// void findSecondSmallestLargest(int arr[], int n){
//     int smallest = INT_MAX, largest = INT_MIN;
//     int Ssmallest = INT_MAX, Slargest = INT_MIN;

//     for(int i=0; i<n; i++) {
//         if(smallest > arr[i]){
//             smallest = arr[i];
//         }
        
//         if(largest < arr[i]){
//             largest = arr[i];
//         }
//     }

//     for(int i=0; i<n; i++) {
//         if(arr[i]>smallest && arr[i]<Ssmallest){
//             Ssmallest = arr[i];
//         }

//         if(arr[i]<largest && arr[i]>Slargest) {
//             Slargest = arr[i];
//         }
//     }

//     if (Ssmallest == INT_MAX)
//         cout << "No second smallest\n";
//     else
//         cout << "Second smallest = " << Ssmallest << "\n";

//     if (Slargest == INT_MIN)
//         cout << "No second largest\n";
//     else
//         cout << "Second largest = " << Slargest << "\n";
// }

void findSecondSmallestLargestCopy(int arr[], int n)
{
    int smallest = INT_MAX, largest = INT_MIN;
    int Ssmallest = INT_MAX, Slargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (smallest > arr[i]) {
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < Ssmallest) {
            Ssmallest = arr[i];
        }

        if (largest < arr[i]) {
            Slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > Slargest) {
            Slargest = arr[i];
        }
    }

    if (Ssmallest == INT_MAX)
        cout << "No second smallest\n";
    else
        cout << "Second smallest = " << Ssmallest << "\n";

    if (Slargest == INT_MIN)
        cout << "No second largest\n";
    else
        cout << "Second largest = " << Slargest << "\n";
}

int main(){

    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // findSecondSmallestLargest(arr, n);
    findSecondSmallestLargestCopy(arr, n);
    return 0;
}