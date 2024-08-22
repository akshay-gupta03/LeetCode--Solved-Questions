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
    bool isPalindrome(ListNode* head) {
    int cnt=0;
    ListNode* traverse=head;
    stack<int> st;
    while(traverse!=nullptr) {
        cnt++;
        st.push(traverse->val);
        traverse=traverse->next;
    } 
    
    traverse=head;
    for(int i=0;i<cnt/2;i++){
        if(traverse->val==st.top()){
            traverse=traverse->next;
            st.pop();
        }
        else{
            return false;
        }
    } 
    return true;
    }
};