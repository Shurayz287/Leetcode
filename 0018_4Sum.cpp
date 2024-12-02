#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    if(nums.size() <4) return {};
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for(int leftOut=0; leftOut<nums.size() -3; leftOut++){
        if(leftOut>0 && nums[leftOut] == nums[leftOut-1]) continue;

        for(int rightOut=nums.size()-1; rightOut>leftOut+2; rightOut--){
            if(rightOut<nums.size()-1 && nums[rightOut] == nums[rightOut+1]) continue;

            int leftIn = leftOut +1,
                rightIn= rightOut -1;
                
            while(leftIn<rightIn){
                if(leftIn>leftOut+1 && nums[leftIn] == nums[leftIn-1]){
                    leftIn++; continue;
                }
                if(rightIn<rightOut-1 && nums[rightIn] == nums[rightIn+1]){
                    rightIn--; continue;
                }

                long long sum = (long long)nums[leftOut] + nums[leftIn] + nums[rightIn]+ nums[rightOut];

                if(sum == target) {
                    result.push_back({nums[leftOut] , nums[leftIn] , nums[rightIn], nums[rightOut]});
                    leftIn++; rightIn--;
                }
                else if(sum>target)  rightIn--;
                else leftIn++;         
            }
        }
    }
    return result;
}

int main()
{

}