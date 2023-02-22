#include <bits/stdc++.h>
using namespace std;

int maxWater(vector<int> heights){
    int area = 0, maxArea = INT_MIN, n = heights.size();
    int lo = 0, hi = n - 1;
    while(lo <= hi){
        area = (hi - lo) * min(heights[lo], heights[hi]);
        maxArea = max(maxArea, area);

        if(heights[lo] < heights[hi]) lo++;
        else hi--;
    }
    return maxArea;
}

int main(){

    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout << maxWater(heights) << endl;

    return 0;
}