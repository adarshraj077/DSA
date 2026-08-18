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
   void transverse(TreeNode* node,vector<int> &result){
       if(node==nullptr){
        return;
       }
       result.push_back(node->val);
       transverse(node->left,result);
       transverse(node->right,result);
   }


    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        transverse(root,preorder);
        return preorder;
    }
};