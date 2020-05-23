int minMoves(int* nums, int numsSize) {
    int i, min, max=0;
    min=nums[0];
    for (i=0;i<numsSize;i++)
    {
        max+=nums[i];
        if (nums[i]<min)
            min=nums[i];
    }
    
    return (max - (min*numsSize));
}
