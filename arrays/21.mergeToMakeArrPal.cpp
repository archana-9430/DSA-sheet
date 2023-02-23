#include <bits/stdc++.h>
using namespace std;

//2 pointer approach

int minOp(vector<int> v){
    int n = v.size(), i = 0, j = n - 1, ans = 0;
    while(i <= j){
        if(v[i] == v[j]) {
            i++, j--;
        } else if(v[i] < v[j]){
            i++;
            v[i] += v[i - 1];
            ans++;
        } else{
            j--;
            v[j] += v[j + 1];
            ans++;
        }
    }
    return ans;
}


int main(){
  //  vector<int> nums = {1, 4, 5, 9, 1}; //1
    vector<int> nums = {26, 5, 7, 25}; //1
    cout << minOp(nums) << endl;

    return 0;
}