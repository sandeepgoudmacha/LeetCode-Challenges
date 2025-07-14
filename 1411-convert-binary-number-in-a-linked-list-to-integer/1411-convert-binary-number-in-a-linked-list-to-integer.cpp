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
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
        ListNode* temp=head;
        string s="";
        while(temp!=NULL){
            s+=to_string(temp->val);
            temp=temp->next;
        }
        int decimal=0;
        int j=0;
        for(int i=s.length()-1;i>=0;i--){
            decimal+=(pow(2,j))*(s[i]-'0');
            j++;
        }
        return decimal;
    }
};