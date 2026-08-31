class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>leftSum;
        vector<int>rightSum;


        int n=nums.size()-1;

        leftSum.reserve(n+1);
        rightSum.reserve(n+1);
        
        int sum=0;

        for(int x:nums){
            sum+=x;
            leftSum.push_back(sum);
            
        }
        sum=0;


     
         for(int i=n;i>=0;i--){
            sum+=nums[i];
            rightSum.push_back(sum);
        }

        reverse(rightSum.begin(),rightSum.end());

        for(int i=0;i<=n;i++){
            if(leftSum[i]==rightSum[i]){
                return i;
            }
        }

        return -1;

    }
};