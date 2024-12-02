# include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    ListNode *vir = new ListNode(0);
    ListNode *result = vir;
    while(head != nullptr && head->next != nullptr)
    {
        swap(head->val, (head->next)->val);
        result->next = new ListNode(head->val);
        result = result->next;
        head = head->next;

        result->next  = new ListNode(head->val);
        result = result->next;
        head = head->next;
    } 
    if(head != nullptr) result->next = new ListNode(head->val);
    return vir->next;
}

ListNode* collectList(vector<int>& nums)
{
    ListNode* vir = new ListNode(0);
    ListNode* collect = vir;
    for(int num:nums)
    {
        collect->next = new ListNode(num);
        collect = collect->next;
    }
    return vir->next;
}

void printList(ListNode* ptL)
{
    while(ptL != nullptr)
    {
        cout<< ptL->val<<" ";
        ptL = ptL ->next;
    }
    cout<<endl;
}

void inputVector(vector<int>& vec)
{
    for(int i=0; i < vec.size(); i++) 
        cin>>vec[i];
}

int main()
{
    int n; cin>>n;
    vector<int> N(n);
    inputVector(N);
    printList(swapPairs(collectList(N)));

}