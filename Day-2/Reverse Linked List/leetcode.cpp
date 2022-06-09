/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr,*nxt=nullptr;
        if(head) nxt=head->next;
        while(head){
            head->next=prev;
            prev=head;
            head=nxt;
            if(nxt) nxt=nxt->next;
        }
        return prev;
    }
};