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
    void reverse(ListNode* &temp,int k){
        ListNode* cur=temp;
        stack<int>st;
        for(int i=0;i<k;i++){
            st.push(cur->val);
            cur=cur->next;
        }
        
        for(int i=0;i<k;i++){
            int top=st.top();
            st.pop();
            temp->val=top;
            temp=temp->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* cur=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        while(c>=k  && k>1){
            c-=k;
            reverse(cur,k);
        }
        return head;
    }
};