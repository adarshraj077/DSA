class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=nums[0];
        int realmax=nums[0];
        int n=nums.size();
       
       for(int right=1;right<n;++right){ 
         
         currentSum=max(nums[right],currentSum+nums[right]);
         realmax=max(currentSum,realmax);

       }

       return realmax;


    }
};