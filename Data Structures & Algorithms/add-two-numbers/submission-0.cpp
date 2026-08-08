

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
           ListNode* dummy =new  ListNode(0);
            ListNode* ans = dummy;
           int val,carry=0;


        while(l1 && l2){
         val=l1->val+l2->val+carry;
         carry=val/10;
          ans->next=new ListNode(val%10);
         
        ans=ans->next;
        l1=l1->next;
        l2=l2->next;
        }

        while(l1){
        val=l1->val+carry;
         carry=val/10;
        ans->next=new ListNode(val%10);
         
        ans=ans->next;
        l1=l1->next;
        }

        while(l2){
        val=l2->val+carry;
         carry=val/10;
        ans->next=new ListNode(val%10);
         
        ans=ans->next;
        l2=l2->next;
        }

        if(carry){
            val=carry;
            ans->next=new ListNode(val%10);
      
        }

        return dummy->next;




        
        
    }
};
