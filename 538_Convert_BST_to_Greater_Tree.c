/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* convertBST(struct TreeNode* root) {
    int sum=0;
    if (root == NULL)
        return NULL;
    
    calculate(root, &sum);
    
    return root;
}

void calculate (struct TreeNode* root, int* sum)
{
    if (root == NULL)
        return;
    
    calculate(root->right, sum);
    root->val += *sum;
    
    *sum = root->val;
    calculate(root->left, sum);
    
    return;
}
