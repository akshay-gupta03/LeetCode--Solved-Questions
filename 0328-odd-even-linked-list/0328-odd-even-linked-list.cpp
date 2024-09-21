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
    ListNode* oddEvenList(ListNode* head) {
    if(head==nullptr) {
        return head;
    }
    if(head->next==nullptr) {
        return head;
    }
    ListNode* odd=head;
    ListNode* even=head->next;
    ListNode* join=even;
    while(even!=nullptr && even->next!=nullptr){
        odd->next=even->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
    }    
    odd->next=join;
    return head;    
    }
};