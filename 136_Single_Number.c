/**
 * Input: [2,2,1]
 * Output: 1
*/

int singleNumber(int* nums, int numsSize){
    int i, val=0;
    
    for (i=0;i<numsSize; i++) {
        val = val ^ nums[i];
    }
    
    return val;
}
