/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
    {
        return 0;
    }
    
    int depthL=1;
    int depthR=1;
    
    if (root->left != NULL)
    {
        depthL += maxDepth(root->left);
    }
    if (root->right != NULL)
    {
        depthR += maxDepth(root->right);
    }
    
    return ((depthL >= depthR) ? depthL : depthR);
}
