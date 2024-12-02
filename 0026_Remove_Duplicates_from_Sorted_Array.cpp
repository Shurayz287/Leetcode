# include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> store;
    int result=0;
    for(int i=0; i<nums.size();i++)
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        else{
            store.push_back(nums[i]);
            result++;
        }
    }
    
    for(int i=0, j=0; i<store.size(); i++ )
    {
        nums[j] = store[i];j++;
    }
    return result;
}

int main()
{
    vector<int> nums = {1,1,1,2,3,3,4};
}