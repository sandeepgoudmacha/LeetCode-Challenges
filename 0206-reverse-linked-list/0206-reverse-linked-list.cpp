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
    ListNode* recursive(ListNode* temp,ListNode* head){
        if(head== nullptr) return temp;
        ListNode* fnxt=head->next;
        head->next=temp;
        // if(head->next==NULL) return head;
        temp=head;
        head=fnxt;
        
        return recursive(temp,head);
       
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=NULL;
        // ListNode* fnxt=NULL;
        return recursive(temp,head);
        //  return head;
    }
};