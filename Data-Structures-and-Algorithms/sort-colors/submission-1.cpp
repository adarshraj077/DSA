class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int left=0, right =nums.size()-1;
         
        //  while(left<right){
        //     if(nums[left]>nums[right]){
        //         swap(nums[left],nums[right]);
        //         left++;
        //         right--;
        //     }else{
        //         left++;
        //         right--;
        //     }
            
             
        //  }
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
        }
        int k=0;
        for(int i=0;i<=2;i++){
            for(int j=0;j<mp[i];j++){
                nums[k++]=i;
            }
        }
 
       
    }
};