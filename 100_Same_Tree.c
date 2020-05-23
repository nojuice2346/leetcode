/**
Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

 * Output: true
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    bool sameL, sameR;
    if ((p==NULL) && (q==NULL))
    {
        return true;
    }
    else if((p==NULL) && (q!=NULL))
    {
        return false;
    }
    else if ((p!=NULL) && (q==NULL))
    {
        return false;
    }
    else if (p->val != q->val)
    {
        return false;
    }
    sameL = isSameTree(p->left, q->left);
    sameR = isSameTree(p->right, q->right);
    
    if (sameL && sameR)
    {
        return true;
    }
    
    return false;
}

