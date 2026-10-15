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
      unordered_map<int,int>map;
      int index=0;


      TreeNode* yoo(vector<int>& preorder,int left,int right){

     if (left > right) return nullptr;
        TreeNode*root= new TreeNode(preorder[index++]);
        
        int  mid=map[root->val];  

          root->left=yoo(preorder,left,mid-1);
          root->right=yoo(preorder,mid+1,right);

          return root;

      }



    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }

     return yoo(preorder,0,inorder.size()-1);

    }
};
