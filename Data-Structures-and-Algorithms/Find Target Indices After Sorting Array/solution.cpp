class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       int less=0;
       int equal=0;
       vector<int>ans;

    //    sort(nums.begin(),nums.end());

       for(int x:nums){
        if(x<target)less++;
        else if(x==target)equal++;
       }

       for(int i=0;i<equal;i++){
        ans.push_back(less+i);
       }

    return ans;
    }
};