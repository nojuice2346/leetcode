/**
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1]
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int count1 = 0;
    int count2 = 0;
    int *ans = NULL;

    ans = (int *)malloc(sizeof(int) * 2);
    memset(ans, 0, sizeof(int) * 2);

    for (count1 = 0; count1 < numsSize; count1++)
    {
       for (count2 = (count1+1); count2 <numsSize; count2++)
       {
           if (target == (nums[count1] + nums[count2]))
           {
               ans[0] = count1;
               ans[1] = count2;
               
               return ans;
           }
       }
    }
    
    return ans;
}
