/**
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *returnArr, *small, *large;
    int count = 0, i=0, j=0, k, min, max;
    bool match=false;

    if (nums1Size < nums2Size)
    {
        returnArr = (int *)malloc(sizeof(int) * nums1Size);
        memset(returnArr, 0, sizeof(int) * nums1Size);
        min = nums1Size;
        max = nums2Size;
        small = nums1;
        large = nums2;
    }
    else
    {
        returnArr = (int *)malloc(sizeof(int) * nums2Size);
        memset(returnArr, 0, sizeof(int) * nums2Size);
        min = nums2Size;
        max = nums1Size;
        small = nums2;
        large = nums1;
    }
    
    for (i = 0;i < min;i++)
    {
        for(j = 0;j < max;j++)
        {
            if (small[i] == large[j])
            {
                for(k=0;k<count;k++)
                {
                    if (returnArr[k] == small[i])
                    {
                        match = true;
                        break;
                    }
                }
                
                if (!match)
                {
                    returnArr[count] = small[i];
                    count++;
                    continue;
                }
            }
        }
        match=false;
    }
    
    *returnSize = count;
    return returnArr;
}
