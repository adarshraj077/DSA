class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>end,start;
        k=k%nums.size();
        for(int i=nums.size()-k;i<nums.size();i++){
            end.push_back(nums[i]);
        }

        for(int i=0;i<nums.size()-k;i++){
            start.push_back(nums[i]);
        }

        int i=0,j=0,m=0;
        while(j<end.size()){
           nums[m++]=end[j++];           
        }

        while(i<start.size()){
            nums[m++]=start[i++];
        }


    }
};