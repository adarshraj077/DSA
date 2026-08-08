
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      
       if (head == nullptr || left == right)
            return head;

       int count=1;
       ListNode* curr=head;
       ListNode* leftNode=nullptr;
       ListNode* rightNode=nullptr;
        ListNode* head1=nullptr;

       while(curr){
        if(count==left){
            leftNode=curr;
        }else if(count==right){
            rightNode=curr;
        }else if(count+1==left){
            head1=curr;
        }
        count++;
        curr=curr->next;
       }

       ListNode* head2=rightNode->next;
       rightNode->next=nullptr;

       // now reverse from left to right 
       curr=leftNode;
       ListNode* prev=nullptr;
       ListNode* next=nullptr;

       while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       }

       if (head1) {
            head1->next = prev;
        } else {
            // left == 1
            head = prev;
        }

       leftNode->next=head2;
       return head;

    }
};