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
   bool contains(TreeNode* root,TreeNode* val){
      if(!root){return false;}
      if(root==val){return true;}
    return contains(root->left,val) ||  contains(root->right,val);
   }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;

        bool pL=contains(root->left,p);
        bool qL=contains(root->left,q);

        if(pL && qL){
            return lowestCommonAncestor( root->left,  p,  q);
        }else if(!pL && !qL){
           return  lowestCommonAncestor( root->right,  p,  q);
        }

        return root;
        
    }
};
