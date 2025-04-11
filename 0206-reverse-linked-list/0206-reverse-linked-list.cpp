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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* temp2=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        while(!st.empty()){
            int top=st.top();
            st.pop();
            temp2->val=top;
            temp2=temp2->next;
        }
        return head;
    }
};