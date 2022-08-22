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
        
        //in case number is ==1 after division by four then it's power of four or else it's just a number but not a power of four 
        return (n==1);
    }
};