class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int longestSubarraySize=0;
        int left=0;
        int right=0;
        int n=nums.size();
        unordered_map<int,int>freq;
        freq.reserve(n);

        while(right<n){
            freq[nums[right]]++;
            while(freq[nums[right]]>k){
                freq[nums[left]]--;
                left++;
            }
            longestSubarraySize=max(longestSubarraySize,right-left+1);
            right++;
        }

        return longestSubarraySize;

    }
};