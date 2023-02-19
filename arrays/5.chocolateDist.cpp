#include <bits/stdc++.h>
using namespace std;

int distributeChocolate(vector<int> v, int m){
    int n = v.size();
    if(n == 0 || m == 0) return 0;
    if(m > n) return -1;

    sort(v.begin(), v.end());
    int minDiff = INT_MAX;

    for(int i = 0; i + m - 1 < n; i++){
        if(v[i + m - 1] - v[i] < minDiff) 
            minDiff = v[i + m - 1] - v[i];
    }
    return minDiff;
}


int main(){
    vector<int> v = {7,3,2,4,9,12,56};
    int m = 3;
    cout << distribute(v, m) << endl;
    cout << distribute({ 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 }, 7);

    return 0;
}