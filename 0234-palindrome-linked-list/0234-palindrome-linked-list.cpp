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
        ListNode* slow=head;
        ListNode* fast=head;
        vector<int>v1,v2;
        while(fast!=NULL&&fast->next!=NULL){
            v1.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;

        }
        reverse(v1.begin(),v1.end());
          if (fast != NULL) {
            slow = slow->next;
        }
        int i=0;
        while(slow!=NULL){
            if(v1[i]!=slow->val) return 0;
            slow=slow->next;
            // fast=fast->next->next;
        i++;
        }
        return 1;
    }
};