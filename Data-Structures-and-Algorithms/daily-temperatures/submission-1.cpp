class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        
        vector<int>result(nums.size(),0);
        int diff=0;
        stack<int>st;

        for(int i=0;i<nums.size();i++){
            //  for(int j=i;j<nums.size();j++){
            //     if(nums[j]>nums[i]){
            //         result[i]=j-i;
            //         break;
            //     }
            while(!st.empty() &&nums[i]>nums[st.top()]){
                int idx=st.top();
                st.pop();
                result[idx]=i-idx;
            }
            st.push(i);
             }

        

        return result;
    }
    };
