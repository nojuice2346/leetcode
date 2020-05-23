/**
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
*/

int romanToInt(char * s){
    int sum = 0, i=0, prev=0;
    
    while (s[i] != '\0') {
        switch(s[i]) {
            case 'I' :
                sum += 1;
                prev = 1;
                break;
            case 'V':
                sum += 5;
                if (prev == 1) {
                    sum -= 2;
                }
                prev = 5;
                break;
            case 'X':
                sum += 10;
                if (prev == 1) {
                    sum -= 2;
                }
                prev = 10;
                break;
            case 'L':
                sum += 50;
                if (prev == 10) {
                    sum -= 20;
                }
                prev = 50;
                break;
            case 'C':
                sum += 100;
                if (prev == 10) {
                    sum -= 20;
                }
                prev = 100;
                break;
            case 'D':
                sum += 500;
                if (prev == 100) {
                    sum -= 200;
                }
                prev = 500;
                break;
            case 'M':
                sum += 1000;
                if (prev == 100) {
                    sum -= 200;
                }
                prev = 1000;
                break;
        }
        
        i++;
    }
    
    return sum;
}
