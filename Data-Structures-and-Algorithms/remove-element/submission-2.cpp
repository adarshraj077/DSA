class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int count =0;
        int st=0,end=nums.size()-1;

      while(st<=end){
        if(nums[st]==val){
            swap(nums[st],nums[end]);
            end--;
        }else{
            st++;
        }
      }

      return end +1;
    }
};