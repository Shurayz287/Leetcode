#include <bits/stdc++.h>
using namespace std;

void create(vector<string> &result, string res, int op,int cl, int n){
    if(op == n && cl== n){
        result.push_back(res);
        return;
    }

    if(op < n) {
        create(result, res+"(", op+1, cl,n);
    }
    if(cl< op){
        create(result, res+")", op, cl+1,n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    create(result, "",0,0,n);
    return result;
}

    

int main(){

}