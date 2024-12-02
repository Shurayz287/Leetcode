# include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
    int lenN = needle.length();
    int lenH = haystack.length();

    for(int i=0; i<lenH; i++)
    {
        if(haystack[i] == needle[0] && (i+lenN<=lenH) && haystack.substr(i,lenN) == needle){
            return i;
        }
    }
    return -1;
}

int main()
{
    string cha, con;
    getline(cin,cha);
    getline(cin,con);
    cout<<strStr(cha,con);
}