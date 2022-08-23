class Solution {
public:
    int rev(int x){
        long long num=0;
        while(x>0){
            int rem=x%10;
            num=num*10 + rem;
            x=x/10;
        }
        return num;
    }
    bool isPalindrome(int x) {
        long long num=rev(x);
        
        return(num==x);
    }
};