class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0,right=0;
         int longestSubarraySize=0;
        unordered_map<char,int>freq;
        int n=s.size();
        freq.reserve(n);

        while(right<n){
            freq[s[right]]++;
            while(freq[s[right]]>2){
                freq[s[left]]--;
                left++;
            }
            longestSubarraySize=max(longestSubarraySize,right-left+1);
            right++;
        }

        return longestSubarraySize;

       
    }
};