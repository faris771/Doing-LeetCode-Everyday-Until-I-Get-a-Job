/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int ans = 1;

    int goodNodes(TreeNode* root) {
        if(!root ) return 0;

        dfs(root,root->val);

        return ans;  


        
    }

    void dfs(TreeNode* root, int maxVal){
        if(!root)
            return;


        if(root->left){
            if(root->left->val >= maxVal){
                ans++;
            }
            dfs(root->left,max(maxVal,root->left->val));

        }


        if(root->right){
            if(root->right->val >= maxVal){
                ans++;
            }
            dfs(root->right, max(maxVal,root->right->val));
        }

    }
};