class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0;
        int right=0;
        int total =accumulate(nums.begin(), nums.end(), 0);
        int target= total-x;
        int sum=0;
        int longest=-1;
        int n=nums.size();
        if (target < 0) return -1;


        while(right<n ){
           sum+=nums[right];
           right++;
           while(left<right && sum>target  ){
            sum-=nums[left];
            left++;
           }
           if(sum==target){longest= max(longest,right-left);}
        }

        if(longest==-1){
            return -1;
        }

        return n-longest;


    }
};