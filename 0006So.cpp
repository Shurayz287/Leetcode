# include <bits/stdc++.h>
using namespace std;



string convert(string s, int numRows)
{
    if(numRows == 1) return s;
    string r = "";
    for(int i=0; i<numRows; i++)
    {
        int j= i;
        while(j<s.length())
        {   
            if(j%(numRows-1) == 0)
            {
                r+=s[j];
                j+=2*(numRows-1);
            } 
            else
            {
                r+=s[j];
                j+=2*(numRows-1);
                if(j-2*i>=s.length()) break;
                else{
                    r+=s[j-2*i];
                }
            }
        }
    }
    return r;
}

void printArr(char Arr)
{
    
}

int main()
{
    string k; getline(cin, k);
    cout<< convert(k,4);
}
