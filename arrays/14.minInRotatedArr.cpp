#include <bits/stdc++.h>
using namespace std;
//O(logN)
int findMin(vector<int> nums){
    int n = nums.size();
    if(n == 1) return nums[0];
    int ans = INT_MAX;
    int l = 0, u = n - 1;
    if(nums[u] > nums[l]) return nums[l];
    while(l <= u){
        int mid = l + (u - l) / 2;
        if(nums[mid] > nums[mid + 1]) return nums[mid + 1];
        if(nums[mid - 1] > nums[mid]) return nums[mid];
        if(nums[mid] > nums[l]) l = mid + 1;
        else
            u = mid - 1;
    }
    return ans;
}


int main(){
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums) << endl;

    return 0;
}