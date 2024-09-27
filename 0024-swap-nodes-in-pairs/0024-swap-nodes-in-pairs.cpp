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
    ListNode* swapPairs(ListNode* head) {
    if(head==nullptr){
        return head;
    }
    if(head->next==nullptr){
        return head;
    }

    ListNode* extra=new ListNode();
    extra->next=head;
    ListNode* swap=extra;
    ListNode* present=head;
    ListNode* next=present->next;

    while(present!=nullptr && next!=nullptr){
        present->next=next->next;
        next->next=present;
        swap->next=next;
        swap=present;
        present=present->next;
        if(present!=nullptr){
            next=present->next;
        }
    }

    return extra->next;    
    }
};