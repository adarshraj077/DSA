class Solution {
public:
    int sumCounts(vector<int>& nums) {

        vector<int>no;
        int n=nums.size();
        no.reserve(n);

        

        for(int i=0;i<n;i++){
            unordered_set<int>se;

            for(int j=i;j<n;j++){
                se.insert(nums[j]);

            no.push_back(se.size());
            }

        }

        int sum=0;

        for(int x:no){
            sum+=(x*x);
        }

        return sum;
        
    }
};