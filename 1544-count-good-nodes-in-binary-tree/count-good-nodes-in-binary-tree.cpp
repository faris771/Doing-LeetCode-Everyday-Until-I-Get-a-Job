class Solution {
public:
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        return dfs(root, root->val);
    }

private:
    int dfs(TreeNode* root, int maxVal) {
        if (!root) return 0;

        int count = (root->val >= maxVal) ? 1 : 0;
        maxVal = max(maxVal, root->val);

        count += dfs(root->left, maxVal);
        count += dfs(root->right, maxVal);

        return count;
    }
};
