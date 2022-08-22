class Solution {
public:
    bool isPowerOfFour(int n) {
        //for zero
        if(n==0)
            return 0;
        //checking if number is divisible by four or not 
        while(n%4==0){
            n=n/4;
        }
        
        return (n==1);
    }
};