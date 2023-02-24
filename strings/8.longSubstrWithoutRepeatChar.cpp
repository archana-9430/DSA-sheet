#include <bits/stdc++.h>
using namespace std;

int longSubs(string s){
    map<char, int> m;
    int max_len = 0, start = 0;
    for(int i = 0; i < s.size(); i++){
        if(m.find(s[i]) != m.end()){
            start = max(start, m[s[i]] + 1);
        }
        m[s[i]] = i;
        max_len = max(max_len, i - start + 1);
    }
    return max_len;
}


int main(){
  //  string s = "bbbbb";
    string s = "abcabcbb";
    cout << longSubs(s) << endl;

    return 0;
}