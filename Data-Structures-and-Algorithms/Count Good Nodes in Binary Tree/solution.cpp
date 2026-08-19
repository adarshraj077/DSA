
class Solution {
public:

    
    int helper(TreeNode* root,int currMAX){
        if(root==NULL){
            return 0;
        }
        int currAns=0;
        if(root->val>=currMAX){
            currAns=1;
            currMAX=root->val;
        }

        int l=helper(root->left,currMAX);
         int r=helper(root->right,currMAX);

         return l+r+currAns;

    }
    
    int goodNodes(TreeNode* root) {

       return helper(root,INT_MIN);
        
    }
};