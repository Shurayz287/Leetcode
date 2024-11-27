#include <bits/stdc++.h>
using namespace std;

// Problem 2
  
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}                    
    ListNode(int x) : val(x), next(nullptr) {}                
    ListNode(int x, ListNode *next) : val(x), next(next) {}   
};
 
class Solution2 {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            
            ListNode* virtualP = new ListNode(0);
            ListNode* reList = virtualP;
            int carry = 0;
            while (l1 != nullptr || l2 != nullptr || carry != 0)
            {
                int sum = 0;
                sum+=carry;
                if (l1 != nullptr)
                {
                    sum += l1->val;
                    l1 = l1 -> next;
                }   

                if (l2 != nullptr)
                {
                    sum += l2->val;
                    l2 = l2 -> next;
                }

                carry = sum/10;
                reList->next = new ListNode( sum%10 );
                reList = reList -> next;
                
            }
            return virtualP->next;

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
    Solution2 Solve;
    int num1,num2; cin>>num1>>num2;
    vector<int> L1(num1),L2(num2);
    
    inputVector(L1);
    inputVector(L2);

    ListNode* l1 = collectList(L1);
    ListNode* l2 = collectList(L2);

    ListNode* solution = Solve.addTwoNumbers(l1,l2);

    printList(solution);

}
