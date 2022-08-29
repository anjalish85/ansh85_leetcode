class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //initializing sum
        int sum=0;
//         updating each element with their previous elements sum
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=sum;
        }
//         returning the sum
    return nums;
    }
};