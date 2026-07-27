class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;

        for(int a:nums){
            mp[a]++;
        }
        //sorting the unordered map .new concept 

         vector<pair<int,int>>vec;
        for(auto p:mp){
        vec.push_back(p);
      }

       sort(vec.begin(),vec.end() ,[](auto &a, auto &b){
         return a.second >b.second;
       });

       for(int i=0;i<k;i++){
        ans.push_back(vec[i].first);
       }
       
        
        return ans;
    }
};
