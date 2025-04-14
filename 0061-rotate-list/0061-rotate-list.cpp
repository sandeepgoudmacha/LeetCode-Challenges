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
        if(head==NULL || head->next==NULL || k==0) return head;
        stack<ListNode*>st;
        ListNode* temp=head;
        int l=0;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
            l++;
        }
        k=k%l;
        if(k==0) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<k;i++){
                 fast=fast->next; 
        }
        while(fast->next!=NULL){

            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;
        // temp=head;
        for(int i=0;i<k;i++){
            ListNode* top=st.top();
            st.pop();
            top->next=head;
            head=top;
        }
        return head;
    }
};