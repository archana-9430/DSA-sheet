#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& nums){
    sort(nums.begin(), nums.end());
     int n = nums.size();
  /*  for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }*/
    
    stack<vector<int>> st;
    for(int i = 0; i < n; i++){
        if(!st.empty() && st.top()[1] >= nums[i][0]){
            st.top()[1] = max(st.top()[1], nums[i][1]);
            
        }
        else st.push(nums[i]);
    }
    nums.clear();
    while(!st.empty()){
        nums.push_back(st.top());
        st.pop();
    }

    return nums;
}

int main(){

   // vector<vector<int>> nums = {{1,3},{2,4},{6,8},{9,10}};
    vector<vector<int>> nums = {{6,8},{1,9},{2,4},{4,7}};
    mergeIntervals(nums);
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
