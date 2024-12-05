#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> re ;
        unordered_map<int,int> mapCheck;
        for(int num:nums) mapCheck[num]++;
        
        int len = nums.size();

        for(int i=0; i<len; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            mapCheck[nums[i]]--;
            for(int j=i+1; j<len; j++)
            {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                
                mapCheck[nums[j]]--;

                int third = -(nums[i]+nums[j]);

                if (mapCheck[third] > 0 && third > nums[j]) re.push_back({nums[i],nums[j],third});

                mapCheck[nums[j]]++;
            }
            mapCheck[nums[i]]++;
        }
        return re;
    }

    vector<vector<int>> threeSum2Pointer(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        int sz = nums.size();
        for(int i=0; i<sz-2 ;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int le = i+1,
                ri = sz-1;
            
            while(le < ri)
            {
                if( nums[i] + nums[le] + nums[ri] > 0) ri--;
                else if(nums[i] + nums[le] + nums[ri] < 0) le++;
                else 
                {
                    result.push_back({nums[i], nums[le], nums[ri]});
                    while(le<ri && nums[le] == nums[le+1]) le++;
                    while(le<ri && nums[ri] == nums[ri-1]) ri--;
                    le++; ri--;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {-1, 0,0,0, 1, 2, -1, -4};

    vector<vector<int>> result = solution.threeSum(nums);

    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
}
