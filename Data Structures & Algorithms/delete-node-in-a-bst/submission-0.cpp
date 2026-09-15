class Solution {
public:
    
    void searchNode(TreeNode* root, int key, TreeNode*& ans) {
        if (!root) return;
        if (root->val == key) {
            ans = root;
            return;
        }
        searchNode(root->left, key, ans);
        searchNode(root->right, key, ans);
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* ans = nullptr;        
        searchNode(root, key, ans);

        if (!ans) return root;           

        if (!ans->left) {
            return deleteHelper(root, key);
        }

        TreeNode* temp = ans->left;
        while (temp->right) {
            temp = temp->right;
        }
        temp->right = ans->right;
        ans->right = ans->left;
        ans->left = nullptr;

        return deleteHelper(root, key);
    }

    TreeNode* deleteHelper(TreeNode* root, int key) {
        if (!root) return nullptr;
        if (key < root->val)
            root->left = deleteHelper(root->left, key);
        else if (key > root->val)
            root->right = deleteHelper(root->right, key);
        else {
            TreeNode* temp = root->right ? root->right : root->left;
            delete root;
            return temp;
        }
        return root;
    }
};