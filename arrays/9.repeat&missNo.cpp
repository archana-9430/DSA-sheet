#include <bits/stdc++.h>
using namespace std;

vector<int> findMissRepeat(vector<int> nums){
    vector<int> ans; //{repeat, miss}
    int n = nums.size();

    int xor1 = nums[0];
    for(int i = 1; i < n; i++){
        xor1 ^= nums[i];
    }
    for(int i = 1; i <= n; i++){
        xor1 ^= i;
    }
    cout << xor1 << endl;
    int x = 0, y = 0;
    int setBit = xor1 & ~(xor1 - 1);

    for(int i = 0; i < n; i++){
        if(setBit & nums[i])
            x ^= nums[i];
        else
            y ^= nums[i];
    }
    for(int i = 1; i <= n; i++){
        if(setBit & i)
            x ^= i;
        else
            y ^= i;
    }
    if(binary_search(nums.begin(), nums.end(), y))
        swap(x, y);
    ans.push_back(x);
    ans.push_back(y);

    return ans;
}


int main(){

    vector<int> nums = {3, 1, 2, 5, 3};
    vector<int> ans = findMissRepeat(nums);
    for(int i = 0; i < 2; i++){
        cout << ans[i] << " ";
    }
    return 0;
}