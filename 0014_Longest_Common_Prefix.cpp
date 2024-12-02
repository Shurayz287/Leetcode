#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size()==1) return strs[0];
        int check = 1;
        int i     = 0;
        string re = "";
        while(check && i<strs[0].length())
        {
            
            for(int j=1; j< strs.size(); j++)
            {
                if(strs[j] == "") return ""; 
                if( strs[j][i] == strs[0][i] ) check =1;
                else
                {
                    check = 0; 
                    return re;
                } 
            }
            if(check) re+=strs[0][i];
            i++;
        }
        return re;
        
    }
};

int main()
{
    Solution s0014;
    vector<string> strs ={"flower","flower","flower","flower"};
    cout<<s0014.longestCommonPrefix(strs);
}