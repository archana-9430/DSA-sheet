#include <bits/stdc++.h>
using namespace std;


int maxSubarrayProdt(vector<int> nums){
    int best = INT_MIN, maxP = 1, minP = 1;
    for(int n: nums){
        if(n < 0){
            swap(maxP, minP);
        }
        maxP = max(maxP*n, n);
        minP = min(minP, n);
        best = max(best, maxP);
    }
    return best;
}

int main(){
    vector<int> nums = {2,3,-2,4};
    cout << maxSubarrayProdt(nums) << endl;

    return 0;
}