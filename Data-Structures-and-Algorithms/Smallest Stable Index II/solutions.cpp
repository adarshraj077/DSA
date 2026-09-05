class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int lar=INT_MIN;
        int small=INT_MAX;
        int n=nums.size();
        int smallestIDX=INT_MAX;

         vector<int>nums2;
         nums2.reserve(n);
         vector<int>answers;

        for(int i=n-1;i>=0;i--){
          small=min(small,nums[i]);
          nums2[i]=small;
        }

        for(int i=0;i<n;i++){
            lar=max(nums[i],lar);
            if(lar-nums2[i]<=k){
                smallestIDX=min(smallestIDX,i);
                 answers.push_back(i);}
        }

        if(answers.size()==0){return -1;}

       
        return smallestIDX;

        
    }
        
    
};