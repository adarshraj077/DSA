
class Solution {
public:
    void reorderList(ListNode* head) {
         
         if(head==NULL ||head->next==NULL || head->next->next==NULL){return ;}


        //find the middel 
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* secondhead=slow->next;

        //
        slow->next=NULL;
        // reverse the second 
        ListNode* curr= secondhead;
        ListNode* prev=NULL;
        ListNode* next=NULL;

        while(curr!=NULL){
            next=curr->next;
           curr->next=prev;
           prev=curr;
           curr =next;

        }

        ListNode* t1=head;
        ListNode* t2=prev;

        while(t2){
            ListNode* m1=t1->next;
            ListNode* m2= t2->next;

            t1->next=t2;
            t2->next=m1;
            t1=m1;
            t2=m2;
        }


        
    }
};
