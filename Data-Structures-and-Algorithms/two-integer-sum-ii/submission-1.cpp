class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
         vector<int>ans;

        while(st<end){
            int sum=nums[st]+nums[end];
            if(sum<target){
                st++;
            }else if(sum>target){
                end--;
            }else{
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }

        }


    }
};
