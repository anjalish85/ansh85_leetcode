class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int c=0;
        //just shifting the non-zero values to the front end
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        //using the same index counter to fill zeroes as j had the value of index till which non-zero values were obtained in nums after shifting 
        for(; j<nums.size(); j++){
            nums[j]=0;
        }
    }
};