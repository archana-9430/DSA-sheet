#include <bits/stdc++.h>
using namespace std;


int maxWater(vector<int> heights){
    int water = 0, n = heights.size();
    vector<int> maxL(n), maxR(n);
    maxL[0] = heights[0], maxR[n - 1] = heights[n - 1];
    for(int i = 1; i < n; i++)
        maxL[i] = max(maxL[i - 1], heights[i]);
    for(int i = n - 2; i >= 0; i--)
        maxR[i] = max(maxR[i + 1], heights[i]);
    for(int i = 0; i < n; i++)
        water += min(maxL[i], maxR[i]) - heights[i];

    return water;
}

int main(){
    vector<int> heights = {4,2,0,3,2,5};
    cout << maxWater(heights) << endl;

    return 0;
}