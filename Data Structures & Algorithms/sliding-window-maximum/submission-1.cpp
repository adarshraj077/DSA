class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxvalue=nums[0];
        vector<int>ans;

        // for(int i=0;i<k;i++){
        //     maxvalue=max(maxvalue,nums[i]);
            
        // }
        // ans.push_back(maxvalue);

        for(int i=0;i<=nums.size()-k;i++){
            maxvalue=nums[i]; 
            for(int j=i;j<i+k;j++){
                maxvalue=max(maxvalue,nums[j]);
            }
             ans.push_back(maxvalue);
        }

        //  for(int i=nums.size()-k;i<nums.size();i++){
        //     maxvalue=max(maxvalue,nums[i]);
            
        // }
        // ans.push_back(maxvalue);


        return ans;



    }
};
