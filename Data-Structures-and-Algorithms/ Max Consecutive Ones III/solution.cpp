class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0;
        int count=0,max_length=0;

        while(right<nums.size()){
           
           if(nums[right]==0){
            count++;
           }
           
          while(count>k){
            
            if(nums[left]==0){
                count--;
            }
             left++;
           }
           max_length=max(right-left+1,max_length);

           right++;
        }


        return max_length;
    }
};