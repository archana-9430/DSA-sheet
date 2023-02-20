#include <bits/stdc++.h>
using namespace std;

int kthLargest(vector<int> nums, int k){

/*    priority_queue<int, vector<int>> pq(nums.begin(), nums.end());
    for(int i = 0; i < k -1; i++){
        pq.pop();
    }
    return pq.top(); */
    
   int n = nums.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        pq.push(nums[i]);
        if(pq.size() > k)
            pq.pop();
    }
    return pq.top();
}


int main(){

    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout << kthLargest(nums, k) << endl; //5

    return 0;
}