class Solution {
public:
    int countOdds(int low, int high) {
        // int count=0;
        // for(int i=low;i<=high;i++){
        //     if(i%2!=0)
        //         count++;
        // }
        // return count;
        if((low%2==1) && (high%2==1))//for odd odd number range
            return (high-low)/2 +1;
        else
            return (high-low+1)/2;
    }
};