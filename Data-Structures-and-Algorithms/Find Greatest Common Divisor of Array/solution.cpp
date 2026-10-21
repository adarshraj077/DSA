class Solution {
public:


     int getHcf(int a,int b){
        return (b==0)? a :getHcf(b,a%b);
     }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());

       int a=nums[0];
       int b=nums[nums.size()-1];

      return getHcf(a,b);




  


    }
};