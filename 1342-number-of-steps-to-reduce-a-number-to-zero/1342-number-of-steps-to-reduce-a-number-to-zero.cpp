class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0)  return 0;
        if(num==1)  return 1;
        
        int c=0;
        while(num>=0){
            if((num%2)==0)
                return 1+numberOfSteps(num/2);
            else        
                return 1+1+numberOfSteps(num/2);
                
            
             c++;
        }
        
          return c;
    }
};