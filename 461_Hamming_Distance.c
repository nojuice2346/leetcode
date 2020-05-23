int hammingDistance(int x, int y){
    int sum = x ^ y;
    int cnt=0;
    
    while (sum > 0) {
        if(sum & 1) {
            cnt++;
        }
        sum >>= 1;
    }
    return cnt;
}
