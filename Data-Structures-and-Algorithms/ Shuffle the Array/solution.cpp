class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int size=2*n;
        ans.reserve(size);
        int x=n;
        int st=0;

        for(int i=0;i<size;i++){
            if(i%2){
                ans.push_back(nums[x++]);
            }else{
                ans.push_back(nums[st++]);
            }
        }

        return ans;


    }
};