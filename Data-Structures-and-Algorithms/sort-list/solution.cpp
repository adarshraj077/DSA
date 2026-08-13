
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head)return nullptr;
         ListNode* curr=head;
         vector<int>nums;

         while(curr){
            nums.push_back(curr->val);
            curr=curr->next;
         }

         sort(nums.begin(),nums.end());

         curr=head;

        for(int i=0;i<nums.size();i++){
            curr->val=nums[i];
            curr=curr->next;
        }

        return head;


        
    }
};