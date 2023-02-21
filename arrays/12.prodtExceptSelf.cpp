#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> nums){
    int n = nums.size(), prodt = 1, cntZero = 0;
    for(int i = 0; i < n; i++){
        prodt *= nums[i];
        if(nums[i] == 0)
            cntZero++;
    }
    vector<int> ans(n, 1);
    for(int i = 0; i < n; i++){
        if(nums[i])
            ans[i] = prodt / nums[i];
        else if(cntZero > 1)
            ans[i] = 0;
        else{
            for(int j = 0; j < n; j++){
                if(i != j)
                    ans[i] *= nums[j];
            }
        }
    }
    return ans;
}


int main(){
    vector<int> v1 = {-1,1,0,-3,3};
    vector<int> v2 = {1,2,3,4};

    v1 = productExceptSelf(v1);
    v2 = productExceptSelf(v2);

    int n = v1.size();
    for(int i = 0; i < n; i++)
        cout << v1[i] << " ";
    cout << endl;

    int m = v2.size();
    for(int i = 0; i < m; i++)
        cout << v2[i] << " ";
    
    return 0;
}