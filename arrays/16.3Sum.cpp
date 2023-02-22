#include <bits/stdc++.h>
using namespace std;




vector<vector<int>> threeSum(vector<int> nums, int target){
    vector<vector<int>> ans;
    int n = nums.size();

    if(n < 3) return ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n - 2; i++){
        if(i == 0 || (i > 0 && nums[i] != nums[i - 1])){
            int x = target - nums[i];
            int lo = i + 1, hi = n - 1;
            while(lo < hi){
 
                if(nums[lo] + nums[hi] == x) {
                    ans.push_back({nums[i], nums[lo], nums[hi]});

                    while(lo < hi && nums[lo] == nums[lo + 1]) lo++;
                    while(lo < hi && nums[hi] == nums[hi - 1]) hi--;

                    lo++;
                    hi--;
                }
                else if(nums[lo] + nums[hi] < x) lo++;
                else hi--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums, 0);
    int n = ans.size(), m = ans[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}