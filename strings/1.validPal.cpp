#include <bits/stdc++.h>
using namespace std;


bool isPalin(string s){
    int n = s.size();
    int left = 0, right = n - 1;
    while(left <= right){
        if(!isalpha(s[left])) left++;
        else if(!isalpha(s[right])) right--;
        else if(tolower(s[left]) == tolower(s[right])) left++, right--;
        else return false;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalin(s) << endl;

    return 0;
}