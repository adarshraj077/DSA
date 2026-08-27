/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int tr(TreeNode* root,int& ans){
          if(!root){return 0;}
          int leftlen=tr(root->left,ans);
          int rightlen=tr(root->right,ans);

          ans=max(ans,leftlen+rightlen);
          return 1+max(leftlen,rightlen);
    }


    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
         tr(root,ans);
         return ans;

    }
};
