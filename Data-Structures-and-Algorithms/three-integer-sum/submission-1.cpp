class Solution {
public:
    
     vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int target;
        vector<vector<int>>ans;
        if (nums.size() < 3) return ans;

        for(int i=0;i<(int)nums.size()-2;i++){
            if(i>0 && nums[i] ==nums[i-1]) {continue;}
            
                    target= -nums[i];
                    int st=i+1,end=nums.size()-1;


        while(st<end){
            int sum=nums[st]+nums[end];
            if(sum<target){
                st++;
            }else if(sum>target){
                end--;
            }else{
                ans.push_back({nums[i],nums[st],nums[end]});
                st++;
                end--;
                while(st<end && nums[st]==nums[st-1])st++;
                while(st<end && nums[end]==nums[end+1])end--;
            }
           }

            }
return ans;
        }};
