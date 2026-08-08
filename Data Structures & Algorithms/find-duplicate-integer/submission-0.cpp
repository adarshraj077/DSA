class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>freq(nums.size(),0);
        
        for(int x:nums){
            if(freq[x]){
                return x;
            }
            freq[x]++;
        }
             return -1;

    }
};
