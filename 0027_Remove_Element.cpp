# include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int j=0;
    for(int i=0; i<nums.size();i++){
        if(nums[i] != val){
            nums[j++] = nums[i];
        }
    }
    return j;
}

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    cout<<removeElement(nums,2)<<endl;
    for(int x:nums) cout<<x<<" ";
}