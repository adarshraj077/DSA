class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left,right=0;
        int longest=0;
        int count=0;
        
        while(right<nums.size()){
            if(nums[right]==0){
                count++;
            }

            while(count>1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            longest =max(longest,right-left);

            right++;
        }


        return longest;



    }
};