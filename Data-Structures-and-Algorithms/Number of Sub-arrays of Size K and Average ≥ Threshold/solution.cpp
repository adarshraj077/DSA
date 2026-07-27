class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        //first loop 
        int sum=0;
        for(int i=0;i<k;i++){
           sum +=nums[i];
        }
       int ans= (sum/k>=threshold)?1:0;

       for(int i=k;i<nums.size();i++){
        sum+=nums[i];
        sum-=nums[i-k];
        (sum/k>=threshold)?ans++:(ans);
       } 

       return ans;

    }
};