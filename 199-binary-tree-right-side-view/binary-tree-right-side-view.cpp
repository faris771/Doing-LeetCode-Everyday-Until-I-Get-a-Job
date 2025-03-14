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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if(!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);


        while(!q.empty()){
                
            int rightMost;
            int  n = q.size();

            for(int i = 0 ;i<n;i++){

                TreeNode* node = q.front();
                q.pop();

                if(node){
                    q.push(node->left);
                    q.push(node->right);
                    rightMost = node->val;
                }    


            }

            ans.push_back(rightMost);

        }
        ans.pop_back();
        
        
        return ans;
    }

    // void dfs(TreeNode* root){
    //     if(!root)
    //         return;
    //     int currentVal = root->val;

    //     if(currentVal> maxVal){
    //         maxVal = currentVal;
    //         ans.push_back(currentVal);
    //     }

    //     rightSideView(root->right);
    //     rightSideView(root->left);

    // }
};
