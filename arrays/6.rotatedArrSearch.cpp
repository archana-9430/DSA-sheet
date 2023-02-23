#include <bits/stdc++.h>
using namespace std;

int SearchInRotatedArr(vector<int> v, int target){

    int l = 0, u = v.size() - 1;

    while(l <= u){
        int mid = (u + l) / 2;
        if(v[mid] == target) 
            return mid;
        else if(v[mid] > v[l]){
            if(target >= v[l] && target <= v[mid])
                u = mid - 1;
            else
                l = mid + 1;
        }
        else{
            if(target >= v[mid] && target <= v[u])
                l = mid + 1;
            else
                u = mid - 1;
        }
    }
    return -1;
}


int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << SearchInRotatedArr(nums, target); //4

    return 0;
}