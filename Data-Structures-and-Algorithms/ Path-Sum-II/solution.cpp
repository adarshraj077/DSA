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
    void compute(TreeNode* root, int targetsum,int key,vector<vector<int>>&ans,vector<int>curr){
        if(!root){
            return;
        }
        key+= root->val;
        

        curr.push_back(root->val);
        if(!root->left&&!root->right&& key==targetsum){
            ans.push_back(curr);
            return;
        }

       compute(root->right,targetsum,key,ans,curr);
      
            
        compute(root->left,targetsum,key,ans,curr);
       

    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>curr;
        int key=0;
        compute(root,targetSum,key,ans,curr);

        return ans;
    }
};