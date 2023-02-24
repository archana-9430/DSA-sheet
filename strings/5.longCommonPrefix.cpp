#include <bits/stdc++.h>
using namespace std;


string prefix(vector<string> s){
    string prefix = "";
    int n = s.size(); 
    sort(s.begin(), s.end());
    int m = s[0].size();
    for(int i = 0; i < m; i++){
      //  cout << s[0][i];
        if(s[0][i] != s[n - 1][i]) break;
        prefix += s[0][i];
    }
    return prefix;
}

int main(){
    vector<string> s = {"flower","flow","flight"};
   // vector<string> s = {"dog","racecar","car"};
    cout << prefix(s) << endl;

    return 0;
}