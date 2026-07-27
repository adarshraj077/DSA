class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int total=1 ;
     int total_with_zero=1;
     int zero_count=0;
     vector<int>output(nums.size());

     for(int a:nums){
        if(a==0){
            zero_count++;
        }
     }

      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){continue;}
        total *=nums[i];
     }




     if(zero_count>1){
        fill(output.begin(),output.end(),0);
        return output;
     }else if(zero_count ==1){
         for(int i=0;i<nums.size();i++){

        if(nums[i]==0){
            output[i]=total;
            continue;
        }else{
             output[i]=0;
        }
        }

     }else{
         for(int i=0;i<nums.size();i++){
        output[i]=total/nums[i];
     }

     }



     

    
  

     return output;

    }
};
