class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       int carry=0;
       ListNode* temp1=l1;
       ListNode* temp2=l2;
       ListNode * dum=new ListNode(0);
       ListNode* head=dum;
       while(temp1!=NULL || temp2!=NULL || carry>0)
       {
        int a,b;
        if(temp1==NULL) a=0;
        else a=temp1->val;
        if(temp2==NULL)  b=0;
        else b=temp2->val;
        int sum=a+b+carry;
        carry=sum/10;
        ListNode* n=new ListNode(sum%10);
        dum->next=n;
       
        dum=dum->next;
         cout<<dum->val<<endl;
         if(temp1!=NULL)
           temp1=temp1->next;
        if(temp2!=NULL)
            temp2=temp2->next;
       }
       return head->next;
    }
};