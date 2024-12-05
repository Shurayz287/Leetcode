#include <bits/stdc++.h>
using namespace std;

/*
vector<int> twoSum(vector<int>& nums, int target) {
    int sizeNums = nums.size();
    for(int i=0 ; i<sizeNums -1; i++){
        int numsJ = target - nums[i];
        for(int j = i+1; j<sizeNums;j++){
            if( nums[j] == numsJ){
                return {i,j};
            }
        }
    }
    return{};

*/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> numsMap;

    for(int i=0; i<nums.size(); i++){   
        if( numsMap.count(target - nums[i]) ){
            return{numsMap[target - nums[i]],i};
        }
        numsMap[nums[i]] = i;
    }

    return {};
}

vector<int> TwoSum(vector<int> nums, int target){
    int left = 0,
        right=nums.size()-1;
    
    while(left < right){
        
        if(nums[left] + nums[right] == target)
            return {left, right};
        
        else if(nums[left] + nums[right] > target) 
            right--;
        else 
            left++;
    }
}

void inputVector(vector<int>& vec)
{
    for(int i=0; i < vec.size(); i++) 
        cin>>vec[i];
}
void printVector(vector<int>& vec) 
{
    for (int i = 0; i < vec.size(); i++) 
        cout << vec[i] << " "; 
    cout << endl;
}

int main()
{
    int num; cin>>num;
    vector<int> nums(num);

    inputVector(nums);
    int target; cin>> target;

    vector<int> reVec = twoSum(nums, target);
    printVector(reVec);

}
