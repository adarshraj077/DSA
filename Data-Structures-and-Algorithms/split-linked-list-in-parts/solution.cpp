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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

         vector<ListNode*>ans(k);
        //first calculate the n
        ListNode* curr=head;
        int n=0;

        
        while(curr){
            n++;
            curr=curr->next;
        }

        int splitsize=n/k;
        int remaning=n%k;
        int currentsize;
        
        curr=head;
           ListNode* prev = curr;
        for(int i=0;i<k;i++){

            currentsize=splitsize;
            ListNode* part = curr;

           // finding the current correct size
           while(remaning){
            currentsize++;
            remaning--;
             break; 
           }

          for(int i=0;i<currentsize;i++){
            prev=curr;
           
            curr=curr->next;
          }
        
        if(prev !=nullptr){
            prev->next=NULL;
        }


        ans[i]=part;
           


        }


      return ans;
        
        

    }
};