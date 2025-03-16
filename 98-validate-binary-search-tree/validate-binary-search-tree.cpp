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
    bool isValidBST(TreeNode* root) {

        return dfs(root,LONG_MIN,LONG_MAX );
    }
private:

    bool dfs(TreeNode* root, long leftLim, long rightLim){{

        if(!root)
            return true;

        if(!(root->val > leftLim && rightLim > root->val)){
            return false;
        }

        return dfs(root->left,leftLim,root->val) && dfs(root->right,root->val,rightLim); 
       
    }}

};