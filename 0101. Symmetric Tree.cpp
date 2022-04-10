class Solution {
    bool isMirror(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) {
            return true;
        }
        else if(p == NULL || q == NULL) //one of them is Not NULL
            return false; 
        
        else if(p->val!=q->val) 
            return false;
        
        else 
            return isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        else
            return isMirror(root->left, root->right);
    }
};
