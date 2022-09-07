class Solution {
public:
    int height(TreeNode* root, int &diameter) {
        int lh, rh;
        
        if(root == nullptr)
            return 0;
        lh = height(root->left, diameter);
        rh = height(root->right, diameter);
        
        diameter = max(diameter, (lh + rh));
        // if(*diameter > (lh + rh))
        //     *diameter = *diameter;
        // else
        //     *diameter = (lh + rh);
        
        return 1 + max(lh, rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};
//
