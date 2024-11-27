#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int myAtoi(string s) 
    {
        int dau = 1;
        int r   = 0;
        int i   = 0;
        while(i < s.length())
        {
            if( s[i]== ' ')
            {
                i++;
            }
            else if(s[i]== '+' || s[i]=='-')
            {
                dau = (s[i] -'+') ? -1 : 1;
                i++;
                if (i < s.length() && !(s[i] >= '0' && s[i] <= '9')) 
                {
                    return 0;
                }

            }
            else if(s[i]<='9' && s[i]>='0')
            {

                while(i<s.length() && s[i]<='9' && s[i]>='0')
                {
                    if (r > (INT_MAX - (s[i] - '0')) / 10) 
                    {
                        return (dau == 1) ? INT_MAX : INT_MIN;
                    }

                    r =  r*10 + (s[i] - '0');
                    i++;
                }
                break;
            } 
            else return 0;
        }
        return r*dau;
    }
};



int main()
{
    Solution s;
    string k;getline(cin,k);
    cout<<s.myAtoi(k);
}