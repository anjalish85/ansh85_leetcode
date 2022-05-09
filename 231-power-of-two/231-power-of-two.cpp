class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==0) return false;
        while(n%2==0) 
            n/=2;
        //let's say number iis 5 therefore while loop will be terminated and thus 5==1 will return 0;
        return n==1;
    }
};