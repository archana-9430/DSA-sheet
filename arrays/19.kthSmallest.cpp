#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> nums, int k){
    priority_queue<int, vector<int>> pq;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(pq.size() > k)
            pq.pop();
        pq.push(nums[0]);
    }
    return pq.top();
}


int main(){

    vector<int> nums = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << kthSmallest(nums, k) << endl;
    return 0;
}