#include <bits/stdc++.h>
using namespace std;

/*
int lengthOfLongestSubstring(string s) {
    
    int lenMax = 0,
        len = s.length();
    for(int i=0; i<len; i++)
    {
        set<char> collectChar = {};
        collectChar.insert(s[i]);
        int count = 1;
        for(int j=i+1; j<len;j++)
        {
            
            if ( collectChar.count(s[j]) )
                break;
            else 
            {
                collectChar.insert(s[j]);
                count++;
            } 
        }
        if (count>lenMax) lenMax = count;
    }
    return lenMax;
}
*/

int lengthOfLongestSubstring(string s) {
    int len = s.length(),
        maxLen=0,
        str=0;
    vector<int> Check(256,-1);
    for(int end=0; end<len;end++)
    {
        int *stt = &Check[s[end]];
        if(*stt >= str)
        {
            str = *stt;
        }
        *stt = end;
        maxLen = max(maxLen, (end-str));
    }
    return maxLen;
}


int main()
{
    string check; getline(cin, check);
    cout<<lengthOfLongestSubstring(check);
}
