#include <bits/stdc++.h>
using namespace std;

void solveLetter(string digits, int i, const unordered_map<char, string> &numAndChar, vector<string> &result, string &output)
{
    if(i == digits.length()){
        result.push_back(output); return;
    }

    string Cbn = numAndChar.at(digits[i]);
    for(char chr:Cbn)
    {
        output.push_back(chr);
        solveLetter(digits, i+1,numAndChar,result,output);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> result;
    if( digits.length()==0) return result;
    unordered_map<char,string> numAndChar = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    string output ="";
    solveLetter(digits,0,numAndChar,result,output);
    return result;
}

void printVector(const vector<string> &vec)
{
    for(auto &x:vec) cout<<x<<" ";
}

int main()
{
    string k;
    getline(cin, k); 
    vector<string> cbn = letterCombinations(k); 
    printVector(cbn); 
}