class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>freq;
        sort(nums.begin(),nums.end());

        for(int x:nums){
            freq[x]++;
        }

        for(int i=nums[0];i<nums[n-1];i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }

        return ans;

    }
};