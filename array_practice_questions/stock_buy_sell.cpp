#include<iostream>
#include<vector>
using namespace std;

// // // my version
// int stockBuySell(vector<int> &prices) {

//     int n = prices.size();
//     int profit = 0;
//     int i = 0, j = i+1;

//     while(j < n) {
//         if(prices[j] < prices[i]){
//             i = j;
//         }else{
//             profit = max(profit, prices[j] - prices[i]);
//         }
//         j++;
//     }

//     return profit;
// }

// // // better written version

int stockBuySell(vector<int> &prices) {

    int n = prices.size();
    int profit = 0;
    int minPrice = prices[0];

    for(int i=1; i<n; i++) {
        profit = max(profit, prices[i] - minPrice);
        minPrice = min(prices[i], minPrice);
    }

    return profit;
}

int main() {
    vector<int> v1 = {7,1,5,3,6,4};
    vector<int> v2 = {2,1,2,1,0,1,2};

    int ans1 = stockBuySell(v1);
    cout << "The profit is: " << ans1 << endl;
    int ans2 = stockBuySell(v2);
    cout << "The profit is: " << ans2;
    return 0;
}