class Solution {
public:

    void traverse (TreeNode* root,vector<string>& ans ,string  s){
    
       s+=to_string(root->val);
       if(root->left) {traverse(root->left,ans,s+"->");};
       if(root->right) {traverse(root->right,ans,s+"->");};
       if(!root->left && !root->right)
       ans.push_back(s);
    }


    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
          traverse(root,ans,"");
          return ans;

    }

};