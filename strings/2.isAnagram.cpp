#include <bits/stdc++.h>
using namespace std;


bool isAnagrams(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s == t);
}

int main(){
    string s = "anagram", t = "nagaram";
    cout << isAnagrams(s, t) << endl;

    return 0;
}