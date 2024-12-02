# include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> chr;
    for(char c:s)
    {
        if(c == '(' || c == '[' || c == '{')
            chr.push(c);
        else{
            if(chr.empty() || (c==')' && chr.top() != '(') 
                           || (c==']' && chr.top() != '[')
                           || (c=='}' && chr.top() != '{'))
                return false;
            chr.pop(); 
        }
    }
    return chr.empty();
}

int main()
{

}