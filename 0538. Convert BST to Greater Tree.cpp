class Solution {
    int sum = 0;
    
    void traversal(TreeNode* root) {
        if(root != NULL) {
            
            convertBST(root->right);
        
            sum += root->val;
            root->val = sum;

            convertBST(root->left);
        }
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        // reverse inorder traversal algorithm
        
        traversal(root);
        return root;
    }
};
