class Solution {
    vector<int> inorder(TreeNode* root, vector<int> &arr) {
        if(root != NULL) {
            inorder(root->left, arr);
            arr.push_back(root->val);
            inorder(root->right, arr);
        }
        return arr;
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> nums;
        vector<int> arr;
        nums = inorder(root, arr);
        
        bool res = is_sorted(arr.begin(), arr.end());
        if(res) {
            for(int i = 1; i<arr.size(); i++) {
                if(arr[i] == arr[i-1])
                    return false;
            }
            return true;
        }
        return false;
    }
};
