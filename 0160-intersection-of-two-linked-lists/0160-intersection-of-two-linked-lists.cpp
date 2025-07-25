/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *originalHeadA = headA;
        while (headA) {
            headA->val *= -1;
            headA = headA->next;
        }
        while (headB) {
            if (headB->val < 0) {
                break;
            }
            headB = headB->next;
        }
        headA = originalHeadA;
        while (headA) {
            headA->val *= -1;
            headA = headA->next;
        }
        return headB;    
    }
};