# include<bits/stdc++.h>
using namespace std;

bool isMatch(string s, string p) {
    unordered_map<char,int> mapOfs,mapOfp;
    for(int i=0; i<s.length(); i++) mapOfs[s[i]]++;
    for(int i=0; i<p.length(); i++)
    {
        if(p[i]== '*') mapOfp[p[i-1]] = 21;
        else mapOfp[p[i]]++;
    }

}

int main()
{

}