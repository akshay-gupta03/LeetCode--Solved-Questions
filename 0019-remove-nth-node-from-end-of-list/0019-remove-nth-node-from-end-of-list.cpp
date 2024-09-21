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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      return answer(head,n); 
    }

    ListNode* answer(ListNode* head,int& n){
        if(head==nullptr){
            return nullptr;
        }
        ListNode* call=answer(head->next,n);
        n--;
        head->next=call;
        if(n==0){
            return call;
        }
        return head;
    }
};