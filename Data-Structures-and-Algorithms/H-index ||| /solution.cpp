class Solution {
public:
    int hIndex(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int ans=0;
        int n=nums.size();

        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid] >= n - mid){
                ans=n-mid;
                right=mid-1;
            }else {
                left=mid+1;
            }
        }

        return ans;


    }
};