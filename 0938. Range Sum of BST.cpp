class Solution {
    
    void inorder(TreeNode *root, vector<int> &nums) {
        if(root == NULL) 
            return;
        
        inorder(root->left, nums);
        
        nums.push_back(root->val);
        
        inorder(root->right, nums);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        vector<int> nums;
        inorder(root, nums);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if(nums[i] >= low && nums[i] <= high) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
