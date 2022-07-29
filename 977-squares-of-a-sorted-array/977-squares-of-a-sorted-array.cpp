class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            nums[i]=n*n;
        }
        sort(nums.begin(), nums.end());
        
        return nums;
    }
};