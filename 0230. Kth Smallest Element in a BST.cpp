class Solution {
    vector<int> inorder(TreeNode* root, vector<int> &arr) {
        
        if(root!=NULL) {
            inorder(root->left, arr);
            arr.push_back(root->val);
            
            inorder(root->right, arr);
        }
        return arr;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums;
        vector<int> arr;
        nums = inorder(root, arr);
        
        return nums[k-1];
    }
}; 

