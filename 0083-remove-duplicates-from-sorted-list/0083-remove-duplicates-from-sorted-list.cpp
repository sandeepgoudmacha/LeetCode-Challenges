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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* pres=temp;
            ListNode* curr=temp;
            while(curr->next!=NULL && curr->next->val == curr->val){
                curr=curr->next;
            }
            pres->next=curr->next;
            temp=temp->next;
        }
        return head;
    }

};