class Solution {
public:
   int sum=0;
    
    void calc(TreeNode* root,string curr){
        
        if(!root){
            return;
        }
        curr+=to_string(root->val);
        calc(root->left,curr);
        
        calc(root->right,curr);

      if(!root->left&&!root->right)    
      sum+=stoi(curr);
    
    }


    int sumNumbers(TreeNode* root) {
        string curr="";
        // dfs will be used 
       calc(root,curr);
       return sum;

    }
};