class Solution {
public:

    int leftheight(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1+leftheight(root->left);
    }

       int rightheight(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1+rightheight(root->right);
    }


    int countNodes(TreeNode* root) {
       int right=rightheight(root);
       int left=leftheight(root);

       if(right==left){
        return pow(2,right)-1;
       }


return 1+countNodes(root->left)+countNodes(root->right);

    }
};