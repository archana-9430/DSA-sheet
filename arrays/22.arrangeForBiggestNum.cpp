#include <bits/stdc++.h>
using namespace std;

//TC = O(NlogN). If size > 10^18 long long  won't work. strings are only option.
int myCompare(string x, string y){

    string xy = x.append(y);
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}


string biggestNum(vector<string> v){
    string ans = "";
    sort(v.begin(), v.end(), myCompare);
    for(int i = 0; i < v.size(); i++){
        ans += v[i];
    }
    return ans;
}


int main(){
    vector<string> v = {"54", "546", "548", "60"};
    cout << biggestNum(v) << endl;

    return 0;
}