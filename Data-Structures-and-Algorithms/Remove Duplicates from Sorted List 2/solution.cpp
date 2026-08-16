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
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* prev=head;
          ListNode* curr=head;
           ListNode* next=head;
         ListNode* dummy=new ListNode (0);
         ListNode* ans = dummy;


           while(curr){
            next=curr->next;
            bool duplicate=false;
            // ans->next = curr;
            while(next && curr->val == next->val){
                  duplicate = true;
                curr=curr->next;
                next=next->next;
            }
             if(duplicate){
                ans->next = next;
            }
            else{
                ans->next = curr;
                ans = ans->next;
            }

            curr = next;
          
           }

     return dummy->next;
      
    }
};