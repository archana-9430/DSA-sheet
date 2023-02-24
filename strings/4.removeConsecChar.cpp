#include <bits/stdc++.h>
using namespace std;

string remove(string s){
    int n = s.size();
    string ans = "";
    ans += s[0];
    for(int i = 1; i < n; i++){
        if(s[i] != s[i - 1])
            ans += s[i];
    }
    return ans;
}


int main(){
    string s = "aabaa";
    cout << remove(s) << endl;

    return 0;
}