#include <bits/stdc++.h>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string> s){
    int n = s.size();
    unordered_map<string, vector<int>> m;
    
    for(int i = 0; i < n; i++){
        string sub = s[i];
        sort(sub.begin(), sub.end());
        m[sub].push_back(i);
    }
    vector<vector<string>> ans;
    for(auto i : m){
        vector<string> temp;
        for(auto j : i.second){
            temp.push_back(s[j]);

        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    int n = ans.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}