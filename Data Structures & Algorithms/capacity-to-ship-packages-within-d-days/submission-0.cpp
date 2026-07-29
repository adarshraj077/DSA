class Solution {
public:
    int canShip(int cap,vector<int>& nums,int days){
        int ships=1;int current=cap;
        
        for(int x:nums){
            if(current-x<0){
                ships++;
                current=cap;
            }
            current-=x;
        }
        return ships<=days;

    }


    int shipWithinDays(vector<int>& nums, int days) {
        int right=std::accumulate(nums.begin(),nums.end(),0);
         auto max_it =std::max_element(nums.begin(), nums.end());
         int left=*max_it;
         int res=right;

         while (left<=right){
            int capacity=left+(right-left)/2;
            if(canShip(capacity,nums,days)){
                res=min(res,capacity);
                right=capacity-1;
            }else{
                left=capacity+1;
            }
         }

         return res;
    }
};