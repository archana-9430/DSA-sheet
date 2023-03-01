#include <bits/stdc++.h>
using namespace std;


int maxWinLen(string s, int k){
    if(s.size() == 0) return 0;
    int start = 0, end = 0, localFreq = 0, result = 0;
    vector<int> count(26, 0);

    for(; end < s.size(); end++){
        count[s[end] - 'A']++;
        localFreq = max(localFreq, count[s[end] - 'A']);
        while((end - start + 1) - localFreq > k){
            count[s[start++] - 'A']--;
        }
        result = max(result, end - start + 1);
    }
    return result;

}

int main(){

    string s = "ABAB";
    int k  =2;
    cout << maxWinLen(s, k);
    return 0;
}