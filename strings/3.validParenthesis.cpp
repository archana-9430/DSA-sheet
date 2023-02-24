#include <bits/stdc++.h>
using namespace std;


bool isValid(string s){
    unordered_map<char, int> brackets = {{'[', -1}, {']', 1}, {'{', -2}, {'}', 2}, {'(', -3}, {')', 3}};
    int n = s.size();
    stack<int> st;
    for(int i = 0; i < n; i++){
        if(brackets[s[i]] < 0)
            st.push(s[i]);
        else{
            if(st.empty()) return 0;
            int x = st.top();
            st.pop();
            if(brackets[x] + brackets[s[i]] != 0) return 0;
        }
    }
    if(st.empty()) return 1;
    return 0;
}

int main(){
    string s = "()[(])]{}";
    cout << isValid(s) << endl;

    return 0;
}