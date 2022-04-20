class Solution {
    
public:
    int height(TreeNode *root) {
        if(root == NULL) 
            return 0;
        
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        int lh, rh;
        
        if(root == NULL) return 1;
        
        lh = height(root->left);
        rh = height(root->right);
        
        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return 1;
        
        return 0;
    }
};
