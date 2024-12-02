#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==1) return 0;
        int maxS = 0,
            S;
        int le=0,
            ri=height.size()-1;
        
        while(le<ri)
        {
            S = min(height[le],height[ri])*(ri-le);
            maxS = max(maxS,S);
            if(height[le] > height[ri]) ri--;
            else  le++;
        }
        return maxS;
    }
};

int main()
{
    Solution solve;
    vector<int> testcase = {1,8,6,120,120,4,3,7,8};
    cout<<solve.maxArea(testcase);
}