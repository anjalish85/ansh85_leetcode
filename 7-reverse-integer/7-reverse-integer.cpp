class Solution {
public:
    int reverse(int x) {
        long long int m=0;
        while(x!=0){
            m=m*10+x%10;
            x=x/10;
        }
        if(m>INT_MAX || m<INT_MIN)
            return 0;
        return m;
    }
};