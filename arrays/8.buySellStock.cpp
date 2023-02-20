#include <bits/stdc++.h>
using namespace std;


int maxProfit(vector<int> nums){

    int n = nums.size(), profit = INT_MIN, mn = nums[0];

    for(int i = 0; i < n; i++){
        mn = min(mn, nums[i]);
        profit = max(profit, nums[i] - mn);

    }
    return profit;
}

int main(){

    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices) << endl; //0

    return 0;
}