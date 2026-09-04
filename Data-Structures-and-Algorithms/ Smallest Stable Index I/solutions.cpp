class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int lar=INT_MIN;
        int small=INT_MAX;
        int n=nums.size();

       vector<int>nums2;
       nums2.reserve(n);
    //    sort(nums2.begin(),nums2.end());

        for(int i=n-1;i>=0;i--){
          small=min(small,nums[i]);
          nums2[i]=small;
        }

        for(int i=0;i<n;i++){
            lar=max(nums[i],lar);
         

            if(lar-nums2[i]<=k){return i;}
        }

        return -1;

        
    }
};