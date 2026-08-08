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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //n form last 
        //nums.size()-n from start
       
        ListNode* curr=head;
        int size=0;

        while(curr){
           size++;
           curr=curr->next;
        }

        int target=size-n-1;
        int count =0;
        curr=head;

        if(target<0){
            return head->next;
        }
        
        

         while(curr&&curr->next && count !=target){
             curr= curr->next;
            count++;
         }

         if(curr->next==nullptr){
            curr->next=nullptr;
         }else if(curr->next &&!curr->next->next){
            curr->next=nullptr;
         }else{
            curr->next=curr->next->next;
         }


         return head;


    }
};
