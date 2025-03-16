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
    int kthSmallest(TreeNode* root, int k) {
        

        int current = 0;
        int ans = -1;
            
        
        dfs(root,k,current,ans);
        return ans;

    }

private:
    void dfs(TreeNode* root, int &k, int &current, int &ans){
        
        if(!root){     
            return;
        } 
        
        dfs(root->left,k,current,ans);
        
        current++;
        if(current == k){
            ans = root->val;
            return ;
        }

        dfs(root->right,k,current,ans);

    
        
    }



};