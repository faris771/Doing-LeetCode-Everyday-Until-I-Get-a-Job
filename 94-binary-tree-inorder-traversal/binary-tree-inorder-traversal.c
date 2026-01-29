/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 

void inOrder(struct TreeNode* root , int* arr , int* count);


int* inorderTraversal(struct TreeNode* root, int* count) {
    if (!root){
        *count = 0;
        return malloc(sizeof(int)) ; 
    }
    int *arr = malloc(sizeof(int)*1000);

    
    *count =0  ;
    inOrder(root, arr,count);
    return arr ;
}


void inOrder(struct TreeNode* root , int* arr , int* count ){
    if (!root){
        return;
    }

    inOrder(root->left, arr,count);
    arr[*count]=root->val;
    (*count)++;
    inOrder(root->right, arr, count);
    

}

