class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left =0,right=0;
        int count=0;
        long long multiply=1;
        

        while(right<nums.size()){
            multiply*=nums[right]; 
            
            while(multiply>=k){
                multiply /=nums[left];
                left++;
              
            }
            count+= right-left+1;
            right++;
        }


        return count ;
    }
};