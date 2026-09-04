class Solution {
public:
    
   TreeNode* createTree(vector<int>& nums,int start,int end){
    if(start>end){return NULL;}

   
    int mid=(start+end)/2;
     TreeNode* root=new TreeNode(nums[mid]);
     root->left=createTree(nums,start,mid-1);
     
     root->right=createTree(nums,mid+1,end);
    
     return root;
   }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return createTree(nums,0,n-1);
    
    }
};