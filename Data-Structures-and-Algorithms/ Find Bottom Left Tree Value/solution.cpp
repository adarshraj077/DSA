
class Solution {
public:
    
    int maxe=INT_MIN;
    int ans;
    void compute(TreeNode* root,int level){
        if(!root)return;
        if(level>maxe){
            maxe=level;
            ans=root->val;
        }

        level=level+1;
       
         compute(root->left,level);
         compute(root->right,level);
    }

    int findBottomLeftValue(TreeNode* root) {
        compute(root,0);
       return ans;

        
    }
};