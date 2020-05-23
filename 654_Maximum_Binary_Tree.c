/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize){
    int i=0, max=0, idx=0;
    if (numsSize == 0)
        return NULL;

    findMax(nums, 0, numsSize, &max, &idx);
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    
    root->val = max;
    root->right = constructMaximumBinaryTree(nums+1+idx, numsSize-1-idx);
    root->left = constructMaximumBinaryTree(nums, idx);
    
    return root;
}

void findMax(int* nums, int L, int R, int *max, int *idx)
{
    int i=0, MM=0, ii=0;
    for (i = L; i < R;i++)
    {
        if (nums[i] > MM)
        {
            MM = nums[i];
            ii = i;
        }
    }
    
    *max = MM;
    *idx = ii;
    
    return;
}
