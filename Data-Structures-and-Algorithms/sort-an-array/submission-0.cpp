class Solution {
public:
    void merge(vector<int>& arr,int left,int mid,int right){
        vector<int>lefts(mid-left+1);
        vector<int>rights(right-mid);
        
        const int n1=mid-left+1;
        const int n2=right-mid;

        for(int i=0;i<n1;i++){
            lefts[i]=arr[left+i];
        }

         for(int i=0;i<n2;i++){
            rights[i]=arr[mid+1+i];
        }

        int i=0,j=0,k=left;

        while(i<n1 && j<n2){
            if(lefts[i]<=rights[j]){arr[k++]=lefts[i++];}
            else{arr[k++]=rights[j++];}
        }

        while(i<n1){
            arr[k++]=lefts[i++];
        }

        while(j<n2){
            arr[k++]=rights[j++];
        }

        
    }


    void mergeSort(vector<int>& nums,int left,int right){
        if (left<right){
            int mid =left+(right-left)/2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid+1,right);
         merge(nums,left,mid,right);
            
        }
        
    }

    vector<int> sortArray(vector<int>& nums) {
         mergeSort(nums,0,nums.size()-1);
         return nums;
    }
};