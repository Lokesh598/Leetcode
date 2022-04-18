very simple solution
1. find nums array using inorder
2. store values in sum from low to high
3. return sum

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

but we can improve this solution further without using loop the efficent solution can be like give below

class Solution {

public:

int sum=0;
    int inorder(TreeNode* root,int L,int R)
    {
        if(root){
        inorder(root->left,L,R);
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        inorder(root->right,L,R);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root)return 0;
        return inorder(root,L,R);
    }
};

