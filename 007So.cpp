# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while(x)
        {
            if(r >INT_MAX/10 || r<INT_MIN/10) return 0;
            else
            {
                r = r*10 + x%10;
                x/=10;
            }
        }
        return r;
    }
};

int main()
{

}