class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       //
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        if (nums.size() < 4) return ans;
        //
        for(int m=0;m<nums.size()-3;m++){
             if(m>0 && nums[m] ==nums[m-1]) {continue;}
             for(int i=m+1;i<(int)nums.size()-2;i++){
           
            if (i > m+1 && nums[i] == nums[i-1]) continue;
                               
                    int st=i+1,end=nums.size()-1;

        while(st<end){
            long long sum=(long long)nums[st]+nums[end]+nums[m]+nums[i];
            if(sum<target){
                st++;
            }else if(sum>target){
                end--;
            }else{
                ans.push_back({nums[m],nums[i],nums[st],nums[end]});
                st++;
                end--;
                while(st<end && nums[st]==nums[st-1])st++;
                while(st<end && nums[end]==nums[end+1])end--;
            }
           }

            }

        }

return ans;
        }


        
    }
;