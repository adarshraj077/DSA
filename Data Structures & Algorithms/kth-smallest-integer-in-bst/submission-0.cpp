
class Solution {
public:
   void giveMeSort(TreeNode* root,vector<int>& sorted){
      if(!root) return ;  
      giveMeSort(root->left,sorted);
      sorted.push_back(root->val);
     giveMeSort(root->right,sorted);
   }



    int kthSmallest(TreeNode* root, int k) {

        vector<int>sorted;
        giveMeSort(root,sorted);
        return sorted[k-1];
        
    }
};
