class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maxr=nums[0];
       int n=nums.size();

       for(int i=0;i<n;i++){
        if(i>maxr){return false;}
        maxr=max(i+nums[i],maxr);
       }
       return true;
    }
};