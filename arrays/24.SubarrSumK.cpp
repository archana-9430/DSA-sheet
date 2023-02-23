#include <bits/stdc++.h>
using namespace std;
//find number of subarrays sum divisible by k.
//neg rem = (rem + k) % k

int maxSum(vector<int> v, int k){
    unordered_map<int, int> m; // stores freq of rem
    int sum = 0, rem = 0, n = v.size(), ans = 0;
    for(int i = 0; i < n; i++){
        ans += v[i];
        rem = sum % k;
        if(rem < 0)
            rem += k;
        if(m.find(rem) != m.end()){
            ans += m[rem];
            m[rem]++;
        } else {
            m[rem] = 1;
        }
    }
    return ans;
}


int main(){

    vector<int> v = { 2, 7, 6, 1, 4, 5 };
    cout << maxSum(v, 3) << endl;
    return 0;
}