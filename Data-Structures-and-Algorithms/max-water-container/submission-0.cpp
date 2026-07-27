class Solution {
public:
    int maxArea(vector<int>& nums) {
        // two pointer 

        int max_area=0,area;
        int st=0,end=nums.size()-1;

        while (st<end){
             area= min(nums[st],nums[end])*(end-st);
             max_area=max(max_area,area);
             if(nums[st]<nums[end])st++;else end--;
        }

        return max_area;
        
        
    }
};
