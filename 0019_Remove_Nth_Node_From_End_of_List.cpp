# include<bits/stdc++.h>
using namespace std;

struct ListNode {     
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    vector<int> store;
    while(head= != nullptr)
    {
        store.push_back(head -> val);
        head = head -> next;
    }
    store.erase(store.begin() + (store.size() - n));
    
    ListNode *vir = new ListNode(0);
    ListNode *reList = vir;
    for(int x:store)
    {
        reList -> next = new ListNode(x);
        reList = reList -> next;
    }
    return vir->next;
}

int main()
{

}