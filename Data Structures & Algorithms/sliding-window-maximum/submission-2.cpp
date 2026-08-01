class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxvalue=nums[0];
         vector<int>ans;
         deque<int>dq;

         for(int i=0;i<nums.size();i++){
            
            // removed element
            while(!dq.empty() && dq.front() <=i-k){
                dq.pop_front();
            }
            //
          
            //remove all smaller elemnts 
            while(!dq.empty() && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
              dq.push_back(i);

            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }

            
         }

        return ans;

       

    }
};