/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    if (!root){
        return 0 ;
    }
 
 

return  (root->left->val)+(root->right->val)== root->val ;
}