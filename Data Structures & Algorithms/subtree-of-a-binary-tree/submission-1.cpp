class Solution {
public:
  

    bool isSameTree(TreeNode* r,TreeNode* s){
        if(!r && !s){return true ;}
        if(!r || !s){return false;}

        if(r->val != s->val){return false;}

        return isSameTree(r->left,s->left) && isSameTree(r->right,s->right);
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) { 
        if(!root)return false;
        if(isSameTree(root,subRoot)){return true;}

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
