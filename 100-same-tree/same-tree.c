/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {

    if(!p&& !q)
        return 1;

    if((!p && q)  || (!q && p)){
        return false ;
    }
    if( ( p->val != q->val) ){
        return 0;
    }

    bool left = isSameTree(p->left , q->left);
    bool right =  isSameTree(p->right , q->right);
    
    return left && right;

}