class Solution {
public:
    int arrangeCoins(int n) {
        int k=1;
        int c=0;
        while(n>=0){
            if(n>=k){
                c++;
            }
            n=n-k;
            k++;
            // c++;
        }
        return c;
    }
};