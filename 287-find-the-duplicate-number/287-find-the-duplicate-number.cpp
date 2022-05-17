class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            // nums[i]=abs(nums[i]);
            if(nums[abs(nums[i])]<0){
                return abs(nums[i]);
            }
            else{
                nums[abs(nums[i])]=nums[abs(nums[i])]*-1;
            }
        }
        // return nums[0];
        
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        return -1;
        
        
    }
};