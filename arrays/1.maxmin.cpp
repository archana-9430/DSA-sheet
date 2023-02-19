#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;
};

Pair findMinMax(vector<int> array){
    struct Pair minmax;
    minmax.min = array[0];
    minmax.max = array[0];

    int n = array.size();
    for(int i = 1; i < n; i++){
        if(array[i] < minmax.min){
            minmax.min = array[i];
        } 
        else if(array[i] > minmax.max){
            minmax.max = array[i];
        }
    }
    return minmax;
}

int main(){

    vector<int> v = {1, 0, 2, -57, 76, 100, 34, 56};
    
    struct Pair minmax = findMinMax(v);
    cout << minmax.max << " " << minmax.min;
    return 0;
}

//TC = O(N), SC = O(1)