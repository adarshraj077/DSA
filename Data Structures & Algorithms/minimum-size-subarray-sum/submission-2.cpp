class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        for(int x:nums)sum+=x;

        if(sum<target)return 0;
        sum=0;
        
        int left=0,right= 0;
        int shortest=INT_MAX;

        while(right<nums.size()){
              sum+=nums[right];
               right++;

           while(sum>=target){
            shortest=min(shortest,right-left);
            
            sum-=nums[left];
            left++;
           }
             
           
        }
   

        return shortest;

        
    }
};