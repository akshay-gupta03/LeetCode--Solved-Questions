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
    ListNode* sortList(ListNode* head) {
    if((head==NULL)||(head->next==NULL)){
            return head;
    }
    
    ListNode* transfer=head;
    vector<int> sorting;
    while(transfer!=nullptr){
        sorting.push_back(transfer->val);
        transfer=transfer->next;
    } 

    sort(sorting.begin(),sorting.end());

    transfer=head;
    for(int i=0;i<sorting.size();i++) {
            transfer->val=sorting[i];
            transfer=transfer->next;
    }
    return head;  
    }
};