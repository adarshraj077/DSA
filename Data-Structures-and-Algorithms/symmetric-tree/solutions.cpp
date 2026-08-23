class Solution {
public:
     bool isMirror(TreeNode* right,TreeNode* left){
       
        if(!left&&!right){return true;}
        if(!left || !right){return false;}

        return (left->val ==right->val)&& isMirror(right->right,left->left)&&isMirror(right->left,left->right);

     }


    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }

        return isMirror(root->left,root->right);
    }
};