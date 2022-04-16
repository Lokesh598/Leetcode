class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        
        bool flag = false;
        while(!q.empty())
        {
            int count = q.size();
            vector<int> temp;
            while(count--)
            {
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left) 
                    q.push(curr->left);
                if(curr->right) 
                    q.push(curr->right);
                   
            }
            if(flag)
                reverse(temp.begin(), temp.end());
            
            res.push_back(temp);
            
            flag = !flag;
        }
        return res;
    }
};
