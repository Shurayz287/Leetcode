#include <bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* virlist = new ListNode(0);
        ListNode* reList = virlist;
        while(list1 != nullptr &&  list2 !=nullptr)
        {
            if(list1 ->val > list2 ->val)
            {
                reList->next = list2;
                list2 = list2 ->next;
            } 
            else
            {
                reList->next = list1 ;
                list1 = list1 ->next;
            }
            reList = reList ->next;
        }
        if (list1 != nullptr) {
            reList->next = list1;
        }
        if (list2 != nullptr) {
            reList->next = list2;
        }
        return virlist ->next;
    }
};

ListNode* collectList(vector<int>& nums)
{
    ListNode* virtualP = new ListNode(0);
    ListNode* collect = virtualP;
    for(int num:nums)
    {
        collect->next = new ListNode(num);
        collect = collect->next;
    }
    return virtualP->next;
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
    Solution Solve;
    int num1,num2; cin>>num1>>num2;
    vector<int> L1(num1),L2(num2);
    
    inputVector(L1);
    inputVector(L2);

    ListNode* l1 = collectList(L1);
    ListNode* l2 = collectList(L2);

    ListNode* solution = Solve.mergeTwoLists(l1,l2);

    printList(solution);
}