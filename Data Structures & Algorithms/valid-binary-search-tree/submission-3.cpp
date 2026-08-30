
class Solution {
public:
   bool valid (TreeNode* root, long long min, long long max){

        if(root==nullptr){return true;}

        if( root->val <=min){
            return false;
        }

        if(root->val >= max){
            return false;
        }

        return valid(root->left,min,root->val) && valid(root->right,root->val,max);
   }


    bool isValidBST(TreeNode* root) {
      return valid(root,LLONG_MIN,LLONG_MAX);
    }
};
