#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> nums){
    int n = nums.size();
    if(n == 1) return nums[0];
    int ans = INT_MAX;
    int l = 0, u = n - 1;
    if(nums[u] > nums[l]) return l;
    while(l <= u){
        int mid = l + (u - l) / 2;
        if(nums[mid] > nums[mid + 1]) return mid + 1;
        if(nums[mid - 1] > nums[mid]) return mid;
        if(nums[mid] > nums[l]) l = mid + 1;
        else
            u = mid - 1;
    }
    return ans;
}

bool pair_(vector<int> nums, int target){
    int n = nums.size();
    int l = findPivot(nums), r = l - 1;
    while(l != r){
        if(nums[l] + nums[r] == target) return true;
        if(nums[l] + nums[r] < target)
            l = (l + 1) % n;
        else
            r = (r + n - 1) % n;
    }
    return false;
}

int main(){
    cout << pair_({11, 15, 26, 38, 9, 10}, 45) << endl;
    cout << pair_({{11, 15, 26, 38, 9, 10}}, 35);

    return 0;
}