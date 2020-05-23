/**
 * Write a program that outputs the string representation of numbers from 1 to n.
 */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    int i=0,count=0;
    char **returnArray;
    char *pData;
    returnArray = (char **)malloc (sizeof(char *) * n);
    pData = (char *)malloc(sizeof(char *) * n * 9);
    
    for (i=1;i<=n;i++)
    {
        if (i%15 == 0)
        {
            sprintf(pData, "FizzBuzz");
        }
        else if (i%3 == 0)
        {
            sprintf(pData, "Fizz");
        }
        else if (i%5 == 0)
        {
            sprintf(pData, "Buzz");
        }
        else
        {
            sprintf(pData, "%d", i);
        }
        count = i-1;
        returnArray[count] = pData;
        pData += 9;
    }
    
    *returnSize = n;
    return returnArray;
}
