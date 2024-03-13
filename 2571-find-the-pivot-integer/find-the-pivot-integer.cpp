class Solution {
public:
    int pivotInteger(int n) {
        int ct = -1;
        int lsum = 0,rsum = 0;
        for(int i = 1 ;i <= n;i++){
            lsum += i;
            for(int j = i; j <=n ;j++){
                rsum += j;
            }
            if(lsum == rsum){
                ct = i;
            }
            rsum = 0;
        }
        return ct;
    }
};