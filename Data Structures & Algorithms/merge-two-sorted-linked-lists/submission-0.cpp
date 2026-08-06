class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
         ListNode* dummy = new ListNode(-1);
         ListNode* ans=dummy;

        while(head1 && head2){
           if(head1->val<head2->val){
               ans->next = new ListNode(head1->val);
               ans=ans->next;
               head1=head1->next;
           }else if (head2->val<head1->val){
             ans->next = new ListNode(head2->val);
               ans=ans->next;
               head2=head2->next;
           }else{
              ans->next = new ListNode(head2->val);
               ans=ans->next;
               ans->next = new ListNode(head2->val);
                ans=ans->next;
                head1=head1->next;
                head2=head2->next;
           }

        }

    while(head1){
         ans->next = new ListNode(head1->val);
               ans=ans->next;
               head1=head1->next;
    }

    while(head2){
         ans->next = new ListNode(head2->val);
               ans=ans->next;
               head2=head2->next;
    }

    return dummy->next;


    }
};
