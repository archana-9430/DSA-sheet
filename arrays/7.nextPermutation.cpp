//For example, for arr = [1,2,3], the following are all the permutations of arr:
// [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> nums){
    int n = nums.size(), k, l;
    for(k = n - 2; k >= 0; k--){
        if(nums[k] < nums[k + 1])
            break;
    }
    if(k < 0) 
        reverse(nums.begin(), nums.end());
    else{
        for(l = n - 1; l > k; l--){
            if(nums[l] > nums[k])
                break;
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
    return nums;
}


int main(){

    vector<int>  nums = {1, 2, 3};
    nums = nextPermutation(nums);

    for(int i = 0; i < 3; i++)
        cout << nums[i] << endl;

    return 0;
}