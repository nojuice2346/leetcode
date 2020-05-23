/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *returnArr, *minArr, *maxArr;
    int min, max, i=0, j=0, count=0;
    
    if(nums1Size < nums2Size)
    {
        returnArr = (int)malloc(sizeof(int)*nums1Size);
        minArr = nums1;
        maxArr = nums2;
        min = nums1Size;
        max = nums2Size;
    }
    else
    {
        returnArr = (int)malloc(sizeof(int)*nums2Size);
        minArr = nums2;
        maxArr = nums1;
        min = nums2Size;
        max = nums1Size;
    }
    
    for (i=0;i<min;i++)
    {
        for(j=0;j<max;j++)
        {
            if (minArr[i] == maxArr[j])
            {
                returnArr[count] = minArr[i];
                count++;
                maxArr[j] = -1;
                break;
            }
        }
    }
    
    *returnSize = count;
    
    return returnArr;
}
