class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //create new node
        //find correct place of val in bst
        //link both of them 
        TreeNode* node = new TreeNode(val);
        if(root == NULL) return node;
        
        TreeNode* cur = root;
        while(true) {
            if(cur->val <= val) {
                if(cur->right != NULL)
                    cur = cur->right;
                else {
                    cur->right = node;
                    break;
                }
            }
            else {
                if(cur -> left != NULL) 
                    cur = cur->left;
                else {
                    cur -> left = node;
                    break;
                }
            }
        }
        return root;
    }
};
