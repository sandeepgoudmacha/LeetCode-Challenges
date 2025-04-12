/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if(head)
       vector<ListNode*>v;
       ListNode* temp=head;
       while(temp!=NULL){
        if(find(v.begin(), v.end(), temp)!=v.end()) return true;
        v.push_back(temp);
        temp=temp->next;
       }
       
        
        return 0;
    }
};