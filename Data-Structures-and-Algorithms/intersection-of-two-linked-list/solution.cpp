
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0;
        int countB=0;

        ListNode *temp1=headA;
        ListNode *temp2=headB;

        if(temp1==nullptr){return NULL;}
        if(temp2==nullptr){return NULL;}

        while(temp1){
            countA++;
            temp1=temp1->next;
        }

        while(temp2){
            countB++;
            temp2=temp2->next;
        }

        int diff=abs(countA-countB);
        temp1=headA;
        temp2=headB;

        while(diff){
            if(countA>countB){
               temp1=temp1->next;
            }
            else{
                temp2=temp2->next;
            }
            diff--;
        }

        if(temp1==nullptr){return NULL;}
        if(temp2==nullptr){return NULL;}

        while(temp1&&temp2){
            if(temp1==temp2){
                return temp1;
            }
             temp1=temp1->next;
               temp2=temp2->next;
        }
   
        return NULL;

    }
};