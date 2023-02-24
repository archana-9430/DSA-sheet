#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string s){
    unordered_map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    for(auto count: m){
        if(count.second > 1)
            cout << count.first << " = " << count.second << endl;
    }
}


int main(){
    string s = "test string";
    printDuplicates(s);

    return 0;
}

