int majorityElement(int* nums, int numsSize) {
    if(numsSize == 0)
        return 0;
    
    int i, num = nums[0];
    int count=1;
    
    for (i=1;i<numsSize;i++)
    {
        if (num==nums[i])
            count++;
        else
            count--;

        if (count < 0)
        {
            num=nums[i];
            count=1;
        }
            
            
        if (count > numsSize/2)
            break;
    }
    return num;
}
