iint findComplement(int num) {
    long ans = 0;
    int count = 0;
    long tmpNum = num;
    
    do
    {
        if (!(tmpNum & 1))
        {
            ans += pow(2, count);
        }
        
        count++;
        tmpNum = tmpNum >> 1;
    }while(tmpNum > 0);
    
    return ans;
}
