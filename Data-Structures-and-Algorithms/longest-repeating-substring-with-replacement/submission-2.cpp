class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0 ,right=0,maxfreq=0,longest=0;
        unordered_map<char,int>freq;

        while(right<s.size()){
            freq[s[right]]++;
           
            for(auto &it:freq){
                maxfreq=max(maxfreq,it.second);

            }
                   
                while((right+1-left)-maxfreq>k){
                freq[s[left]]--;
                left++;
                }
            
                longest=max(longest,right-left+1);
                right++;
        }

        return longest;

    
    }
};
