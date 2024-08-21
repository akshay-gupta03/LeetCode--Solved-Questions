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
    ListNode* deleteMiddle(ListNode* head) {
    if(head->next==nullptr){
        head=nullptr;
        return head;
    }
    ListNode* one=head;
    ListNode* two=head;
    ListNode* minus=head;
    while(two!=nullptr && two->next!=nullptr){
        minus=one;
        one=one->next;
        two=two->next->next;
    }
    minus->next=minus->next->next;
    return head;
    }
};