#include <bits/stdc++.h>
using namespace std;


bool duplicates(vector<int> v){
    return v.size() > set<int>(v.begin(), v.end()).size();
}

int main(){

    cout << duplicates({ 34, 23, 54, 1});
    cout << duplicates({1, 34, 23, 54, 1, 544});
    return 0;
}