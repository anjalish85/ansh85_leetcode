class Solution {
public:
    int sz(int num){
        int k=0;
        while(num>0){
            k++;
            num/=10;
        }
        return k;
    }
    int findNumbers(vector<int>& nums) {
        int k=0;
        for(auto a: nums){
            if(sz(a)%2==0){
                k++;
            }
        }
        
        return k;
    }
};