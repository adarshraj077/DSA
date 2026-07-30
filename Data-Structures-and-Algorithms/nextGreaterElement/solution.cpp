class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       //find that element in the nums2 
       stack<int>st;
       unordered_map<int,int>nextGreater;

       for(int i=nums2.size()-1;i>=0;i--){
         
         while(!st.empty()&&st.top()<=nums2[i]){
            st.pop();
         }
         
         if(st.empty()){
            nextGreater[nums2[i]]=-1;
         }else{
             nextGreater[nums2[i]]=st.top();
         }
          st.push(nums2[i]);
       }

       //then find the next greatest integer
       vector<int>ans;

       for(int num:nums1){
        ans.push_back(nextGreater[num]);
       }
       return ans;
    }
};