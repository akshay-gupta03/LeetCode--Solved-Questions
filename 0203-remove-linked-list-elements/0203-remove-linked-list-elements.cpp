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
    ListNode* removeElements(ListNode* head, int val) {
    while (head!=nullptr && head->val == val){
        head=head->next;
    }
    if (head==nullptr){
        return head;
    }

    ListNode *iterator= head;
    while (iterator->next!=nullptr) {
        if (iterator->next->val == val){
            iterator->next = iterator->next->next;
        }
        else{
            iterator = iterator->next;
        }
    }
    return head;
    }
};