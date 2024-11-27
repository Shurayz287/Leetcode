#include <bits/stdc++.h>

using namespace std;

class Solution5 {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<=1) return s;
        string longest = "";
        for(int i=0; i<n-1 ; i++)
        {
            for(int j=i; j<n; j++)
            {
                string check = s.substr(i, j - i + 1),
                        restr= check;
                reverse(restr.begin(), restr.end());
                if(check == restr && check.size()>= longest.size()) 
                {
                    longest = check;
                }
            }
            
        }
        return longest;
    }
};

int main()
{
    string k; getline(cin, k);
    cout<<longestPalindrome(k);
}
