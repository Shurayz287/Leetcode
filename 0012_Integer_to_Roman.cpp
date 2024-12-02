#include <bits/stdc++.h>
using namespace std;



string intToRoman(int num) {
        string roman="";
        vector<string> result;
        string ch2D[4][2] = {
        {"V", "I"},
        {"L", "X"},
        {"D", "C"},
        {"", "M"}
        };
        
        int l=0;
        while(num)
        {
            int z = num%10;
            string res="";
            if(z<4)
            {
                for(int i=0; i<z; i++)
                {
                    res+=ch2D[l][1];
                }
            }
            else if(z==4) res = ch2D[l][1]+ch2D[l][0];
            else if(z==5) res = ch2D[l][0];
            else if(z< 9)
            {
                res = ch2D[l][0];
                for(int i=0; i<z-5; i++)
                {
                    res+=ch2D[l][1];
                }
            }
            else res = ch2D[l][1]+ ch2D[l+1][1];

            result.push_back(res);
            l++;
            num/=10;
        }
        for(int i=result.size()-1; i>=0; i--)
        {
            roman+=result[i];
        }
        return roman;
    }

int main()
{
    int z; cin>>z;
    cout<<intToRoman(z);
}