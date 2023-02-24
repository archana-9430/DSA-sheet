#include <bits/stdc++.h>
using namespace std;

string mobile(string s){
    vector<string> mob = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555",
     "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
     string ans = "";
     int n = s.size();
     for(int i = 0; i < n; i++){
        if(s[i] == ' ')
            ans += "0";
        else ans += mob[s[i] - 'A'];
     }
     return ans;
}


int main(){
    string s = "GEEKSFORGEEKS";
    cout << mobile(s) << endl;

    return 0;
}