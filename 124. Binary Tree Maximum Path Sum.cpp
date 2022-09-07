class Solution {
public:
    int findMaxPath(TreeNode* root, int &maximum) {
        int leftSide, rightSide;
        if(root == nullptr) return 0;
        leftSide = max(0, findMaxPath(root->left, maximum));
        rightSide = max(0, findMaxPath(root->right, maximum));
        int res = root->val;
        maximum = max(maximum, (leftSide + rightSide) + res);
        return res + max(leftSide, rightSide);
    }
    int maxPathSum(TreeNode* root) {
        // int maximum = 0;// mot work with negative nodes
        int maximum = INT_MIN;
        findMaxPath(root, maximum);
        return maximum;
    }
};
