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
    ListNode* rotateRight(ListNode* head, int k) {
    if(head==nullptr) {
        return head;
    }
    if(head->next==nullptr) {
        return head;
    }
    
    int length=1;
    ListNode* tail=head;
    while (tail->next!=nullptr) {
        tail=tail->next;
        length++;
    }
    tail->next=head;
    k=k%length;
    for(int i=0; i<length-k;i++) {
        tail=tail->next;
    }
    head=tail->next;
    tail->next=nullptr;
    return head;
    }
};