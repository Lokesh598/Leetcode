class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int count = q.size();
            vector<int> temp;
            while(count--)
            {
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left != nullptr) 
                    q.push(curr->left);
                if(curr->right != nullptr) 
                    q.push(curr->right);
            }
            
            res.push_back(temp);
        }
        return res;
    }
};
