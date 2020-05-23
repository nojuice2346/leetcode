/**
Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

char* reverseString(char* s) {
    int maxNum = strlen(s);
    int num = 0;
    int num2 = maxNum - 1;
    char tmp= {0};
    
    while(num < num2)
    {
        tmp = s[num];
        s[num] = s[num2];
        s[num2] = tmp;
        
        num++;
        num2--;
    }
     
    return s;
    
}
