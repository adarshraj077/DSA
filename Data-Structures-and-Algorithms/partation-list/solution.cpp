
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessDummy = new ListNode(0);
        ListNode* moreDummy = new ListNode(0);

        ListNode* less=lessDummy;
        ListNode* more=moreDummy;
        ListNode* curr=head;

        
        while(curr){
            if(curr->val<x){
             less->next= curr;
             less=less->next;
            }else{
                more->next= curr;
                more=more->next;
            }
            curr=curr->next;
        }

        more->next=nullptr;
        less->next = moreDummy->next;

        return lessDummy->next;

    }
};