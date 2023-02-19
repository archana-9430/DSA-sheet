#include <bits/stdc++.h>
using namespace std;


int kadane(vector<int> v){
    int n = v.size();
    int maxSum = INT_MIN, currSum = v[0];
    for(int i = 0; i < n; i++){
        currSum += v[i];
        if(currSum > maxSum)
            maxSum = currSum;
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> v = {1, -3, 2, 4, 0, -54, 100, -54, 65, 40, -8};
    cout << kadane(v); // 151

    return 0;
}