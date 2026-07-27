class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {



        // int current_sum=0;
        // int total=0;
        // for(int i=0;i<nums.size();i++){
        //      current_sum = 0;
        //    for(int j=i;j<nums.size();j++){
        //     current_sum +=nums[j];

        //     if(current_sum==k){
        //         total++;
               
        //         continue;
        //     }
        //    }
        // }
        // return total;


        vector<int>prefix_sum(nums.size());
        int sum=0;
        int ans=0;

        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            prefix_sum[i]=sum;
        }
        unordered_map<int,int>ma;

        for(int i=0;i<nums.size();i++){

            if(prefix_sum[i]==k){
              ans++;
            }

            int val=prefix_sum[i]-k;
            if(ma.find(val) !=ma.end())ans+=ma[val];


    //  if(ma.find(val) ==ma.end())
            ma[prefix_sum[i]]++;

        }


        return ans;


    }
};