class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int ls=0;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            
            if(ls==sum)
                return i;
            else{
                ls+=nums[i];
            }
        }
    return -1;
    }
};