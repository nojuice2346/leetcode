/**
 *  Input: 123
 * Output: 321
*/



int reverse(int x){
    if (x <= -2147483648 || x >= 2147483647) {
        return 0;
    }
    
    bool neg = false;
    int temp[50] = {0};
    int i=0, y=0, j=0;
    
    if (x<0) {
        neg = true;
        x= x * (-1);
    }
    
    while (x > 0) {
        temp[i] = (x%10);
        i++;
        x=x/10;
    }
    
    while (i>0) {
        y+=temp[i-1] * pow(10, j);
        if (y <= -2147483648 || y >= 2147483647) {
            return 0;
        }
        j++;
        i--;
    }
    
    if (neg) {
        y=y*(-1);
    }
    
    return y;
}
