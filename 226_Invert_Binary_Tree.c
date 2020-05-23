/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode *node;
    
    if (root != NULL)
    {
        node = root->left;
        root->left = root->right;
        root->right = node;
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
    }
    return root;
}
