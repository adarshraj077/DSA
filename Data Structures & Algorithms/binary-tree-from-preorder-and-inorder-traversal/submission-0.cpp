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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0 || inorder.size()==0){
            return NULL;
        }
         
          TreeNode*root= new TreeNode(preorder[0]);

          int mid;

          for(int i=0;i<inorder.size();i++){
             if(inorder[i]==preorder[0]){
                mid=i;
             }
          }

          vector<int> leftPr(preorder.begin()+1,preorder.begin()+mid+1);
          vector<int> rightPr(preorder.begin()+mid+1,preorder.end());

             vector<int> leftIn(inorder.begin(), inorder.begin() + mid);
        vector<int> rightIn(inorder.begin() + mid + 1, inorder.end());

       

          root->left=buildTree(leftPr,leftIn);
          root->right=buildTree(rightPr,rightIn);

          return root;


    }
};
