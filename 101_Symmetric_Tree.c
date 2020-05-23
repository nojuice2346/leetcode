/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode* left, struct TreeNode* right);

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
    {
        return true;
    }
    else if ((root->left == NULL) && (root->right != NULL))
    {
        return false;
    }
    else if ((root->left != NULL) && (root->right == NULL))
    {
        return false;
    }
    return isMirror(root->left, root->right);
}

bool isMirror(struct TreeNode* left, struct TreeNode* right)
{
    bool mirror1, mirror2;
    if((left == NULL) && (right == NULL))
    {
        return true;
    }
    else if ((left == NULL) && (right != NULL))
    {
        return false;
    }
    else if ((left != NULL) && (right == NULL))
    {
        return false;
    }
    else if (left->val != right->val)
    {
        return false;
    }
    
    mirror1 = isMirror(left->left, right->right);
    mirror2 = isMirror(left->right, right->left);
    
    return ((mirror1 && mirror2) ? true: false);
}
