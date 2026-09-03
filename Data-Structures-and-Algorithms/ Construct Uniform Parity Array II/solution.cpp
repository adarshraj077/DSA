class Solution {
public:
    bool uniformArray(vector<int>& nums) {

       int n=nums.size();

       int min_odd=INT_MAX;
       int min_even=INT_MAX;

       for(int x:nums){
        if(x%2){min_odd=min(min_odd,x);}
        else{
            min_even=min(min_even,x);
        }
       }

       if(min_even ==INT_MAX || min_odd == INT_MAX){
           return true;
       }


       vector<int>nums2;
       nums2.reserve(n);
       
       int truth=0;
       nums2.push_back(nums[0]);
       
       for(int i=0;i<n;i++){
         int x=nums[i]%2==0;
         if(x==truth){
            nums2.push_back(nums[i]);
         }else{
            int p=nums[i]-min_odd;
            if (p <= 0) {
                    return false;
                }
            
               int y=p%2==0;

            if(y==truth){
                nums2.push_back(p);
            }else{
                return false;
            }
         }
         
          
       }
       

       return true;

    }
};