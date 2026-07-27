class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int boat=0;
        //handling condtn where limit is 3 and value is also 3 type shit 
       sort(nums.begin(),nums.end());

       int st=0,end=nums.size()-1;

       while(st<=end){
        if(nums[st]+nums[end]<=limit){
        boat++;
        end--;st++ ;}else{
        boat++;
        end--;
        }
       
        
       }

        return boat;


    }
};