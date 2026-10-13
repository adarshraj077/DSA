class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // odd no ko minus 
        // even no ko plus 

      long long score=0;

        for(int i=0;i<nums.size();i++){
            nums[i]=(nums[i]*nums[i]);
        }

        sort(nums.begin(),nums.end());
        int n=nums.size();

        int i=0,j=n-1;

        while(i<j){
           score += (nums[j]-nums[i]);
           i++;
           j--;
        }
        if(n%2){score+=nums[i];}
         
        return score;
    }
};