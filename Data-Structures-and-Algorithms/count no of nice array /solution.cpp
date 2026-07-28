class Solution {
public:

    int atMost(vector<int>& nums, int k){
         
        int left=0,right=0;
        int odd_numbers=0;
        int count=0;

        while(right<nums.size()){
           if(nums[right]%2){
            odd_numbers++;
           }
             while(odd_numbers>k){
                if(nums[left]%2){
                    odd_numbers--;
                }
                left++;
             }
          count +=right-left+1;
           right++;
        }


         return count;
    } 

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};