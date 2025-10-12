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
    void reorderList(ListNode* head) {
        vector<ListNode*>v;
        ListNode* cur=head;
        while(cur){
            v.push_back(cur);
            cur=cur->next;
        }
        int n=v.size();
        int i=0,j=n-1;
        while(i<j){
            v[i]->next=v[j];
            i++;
            if(i>=j) break;
            v[j]->next=v[i];
            j--;
        }
        v[i]->next=NULL;
        
    }
};