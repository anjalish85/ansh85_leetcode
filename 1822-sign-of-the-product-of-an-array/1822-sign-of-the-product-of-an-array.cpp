class Solution {
public:
    
    int arraySign(vector<int>& nums) {
        int m=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)   m*=-1;
            else if(nums[i]>0)  m*=1;
            else    m*=0;
        }
        return m;
    }
};