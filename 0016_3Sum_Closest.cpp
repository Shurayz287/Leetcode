# include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int i   = 0;
    int dcr = INT_MAX;
    int result;
    while(i<nums.size() - 2)
    {
        int le = i+1;
        int ri = nums.size() -1;
        while(le<ri)
        {
            int sum = nums[i] + nums[le] + nums[ri];
            if( dcr > abs(sum-target)) 
            {
                result = sum;
                dcr = abs(sum-target);
            }
            if (sum == target) return sum;
            else if(sum-target>0) ri--;
            else le++;
        }
        i++;
    }
    return result;
}

int main()
{
    int n; cin>>n;
    vector<int> N;
    for(int i=0; i<n; i++)
    {
        int x; cin>> x; N.push_back(x);
    }
    int target; cin>>target;
    cout<<threeSumClosest(N, target);
}