#include <bits/stdc++.h>
using namespace std;


vector<int> reverse(vector<int>& v){
    int n = v.size();

    for(int i = 0; i < n / 2; i++){
        swap(v[i], v[n - i - 1]);
    }
    return v;
}

int main(){
    vector<int> v = {1, 2, 3 ,4 ,5};
    vector<int> v2 = {1, 2, 3 ,4 ,5, 6};
    reverse(v);
    for(int i =  0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    reverse(v2);
    for(int i =  0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }

    return 0;
}