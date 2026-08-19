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
   void bfs(vector<vector<int>>& result,int level,TreeNode* node){
         if (!node) return;

         if(level==result.size()){
            result.push_back({});
         }
         result[level].push_back(node->val);

         bfs(result,level+1,node->left);
         bfs(result,level+1,node->right);
   }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        bfs(result,0,root);
        return result;
    }
};