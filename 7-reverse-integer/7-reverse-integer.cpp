class Solution {
public:
    int reverse(int x) {
        long long int m=0;
        while(abs(x)>0){
            m=m*10+x%10;
            x=x/10;
        }
        if(m>2147483647 || m<-2147483648)
            return 0;
        if(x<0)
            m=m*(-1);
        return m;
    }
};