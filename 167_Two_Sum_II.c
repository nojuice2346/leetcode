/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *returnArray;
    int i=0, j, sum;
    bool match = false;

    *returnSize = 2;
    returnArray = (int *)malloc(sizeof(int)* 2);
    memset(returnArray, 0, sizeof(returnArray));
    
    for(i=0;i<numbersSize;i++)
    {
        if (numbers[i] > target)
            break;

        for(j=i+1;j<numbersSize;j++)
        {
            if ((numbers[j] > target) && (target > 0))
                break;
            
            sum=numbers[i]+numbers[j];
            if (sum == target)
            {
                match=true;
                break;
            }
        }
        
        if (match)
        {
            returnArray[0] = i+1;
            returnArray[1] = j+1;
            break;   
        }
    }
    
    return returnArray;
}
