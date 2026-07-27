class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        if(!nums.size())return 0;

        vector<int>ans;
        int longest=1,current=1;

        
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
               current++;
            }else if(nums[i]-nums[i-1]==0){
                continue;
            }else{
                longest =max(longest,current);
                current=1;
            }


        }
        longest =max(longest,current);

        return longest;

    }

};
