class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int n=nums.size();

        sort(nums.begin(),nums.end());
        int min=nums[0];

        if(nums[0]==nums[n-1]){return 0;}

        for(int x:nums){
            ans+=x-min;
        }

        return ans;

    }
};