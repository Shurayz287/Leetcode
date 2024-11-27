#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        else
        {
            int rex = 0;
            while(x > rex)
            {
                rex = rex*10 + x%10;
                x /= 10;
            }
            return x == rex || x == rex/10;
        }
    }
};

int main()
{

}
