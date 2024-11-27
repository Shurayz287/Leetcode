#include <bits/stdc++.h>
using namespace std;

// Problem 1
class Solution1 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            int sizeNums = nums.size();
            map<int,int> numsMap;
            numsMap[nums[0]] = 0;
            for(int i=1; i<sizeNums; i++)
            {   
                int val = target - nums[i];
                if( numsMap.count(val) )
                {
                    return{numsMap[val],i};
                }
                numsMap[nums[i]] = i;
            }

            return {};
        }
};

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
    Solution1 solve;
    int num; cin>>num;
    vector<int> nums(num);

    inputVector(nums);
    int target; cin>> target;

    vector<int> reVec = solve.twoSum(nums, target);
    printVector(reVec);

}