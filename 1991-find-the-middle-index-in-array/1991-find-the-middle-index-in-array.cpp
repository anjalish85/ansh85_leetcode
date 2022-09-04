class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=0;
        int ls=0;
        
        for(int i=0; i<nums.size(); i++){
            s+=nums[i];
        }
        
        for(int i=0; i<nums.size(); i++){
            s-=nums[i];
            if(s==ls){
                return i;
            }
            ls+=nums[i];
        }
        
        
        return -1;
    }
};