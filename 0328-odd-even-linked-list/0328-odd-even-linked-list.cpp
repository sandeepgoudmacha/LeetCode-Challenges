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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;  
      ListNode* temp=head;
        int i=3;
        ListNode* odd=head;
        ListNode* even=head->next;
        // ListNode* h=head;
        ListNode* h2=head->next;
       temp=even->next;
        while(temp!=NULL){
            if(i%2!=0){
                odd->next=temp;
                odd=temp;
                // h->next=temp;
                // h=temp;
            }
            else{
                    even->next=temp;
                    even=temp;
            }
            temp=temp->next;
            i++;
        }
        odd->next=h2;
        even->next=NULL;
        return head;
    }
};