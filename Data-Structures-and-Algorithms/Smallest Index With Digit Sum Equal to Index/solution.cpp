class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
           int x=nums[i];
           while(x){
            sum += x%10;
            x=x/10;
           }
           if(sum==i){return i;}
           sum=0;
        }

        return -1;

    }
};