class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>group;

        for(int x:nums){
          group[x]++;
        }

        int n=nums.size()/3;

          for(auto &it:group){
        if(it.second>n){
          
           ans.push_back(it.first);
        }
       }

        return ans;




    }
};