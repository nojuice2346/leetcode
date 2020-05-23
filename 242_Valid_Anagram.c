bool isAnagram(char* s, char* t) {
    int num1 = strlen(s);
    int num2 = strlen(t);
    int i = 0;
    int table[26] = {0};
    
    if (num1 != num2)
        return false;
    
    for (i = 0;i < num1;i++)
    {
        table[s[i] - 'a']++;
    }
    
    for (i = 0; i < num1; i++)
    {
        table[t[i] - 'a']--;
        
        if(table[t[i] - 'a'] < 0)
            return false;
    }
    
    
    return true;
}
