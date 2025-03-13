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
 
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(!root)
            return ans; 
        q.push(root);

        while(!q.empty()){
            
            vector<int> tmp;
            int n = q.size();

            for(int i =0;i<n;i++){
                
                TreeNode* currentNode = q.front();
                q.pop();
                if(currentNode){
                    // not nullptr
                    tmp.push_back(currentNode->val);

                    q.push(currentNode->left);
                    q.push(currentNode->right);
                    
                
                }

            }

            if(tmp.size() > 0)
                ans.push_back(tmp);
        }
    
        return ans;
    }

};
