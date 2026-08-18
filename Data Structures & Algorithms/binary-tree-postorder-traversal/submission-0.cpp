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
       transverse(node->left,result);
       transverse(node->right,result);
       result.push_back(node->val);
   }


    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> postorder;
        transverse(root,postorder);
        return postorder;
    }
};