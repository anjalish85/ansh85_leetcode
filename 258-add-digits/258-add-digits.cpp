class Solution {
public:
    int addDigits(int num) {
        if(num<10)
            return num;
        int s=0;
        int c=0;
        while (num>=10){
            s=0;
            while(num>0){
                s+=num%10;
                num/=10;
            }
            num=s;
        }
        return num;
    }
};