class Solution {
public:
    int idx = 0;
  TreeNode* bstFromPreorder(vector<int>& preorder, int p_val = INT_MAX) {
      if (idx >= preorder.size() || preorder[idx] > p_val)
          return nullptr;
      auto n = new TreeNode(preorder[idx++]);
      n->left = bstFromPreorder(preorder, n->val);
      n->right = bstFromPreorder(preorder, p_val);
      return n;
  }
};
