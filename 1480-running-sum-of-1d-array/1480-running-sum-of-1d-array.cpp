class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> v;
        v.push_back(nums[0]);
        v.push_back(nums[0]+nums[1]);
        for(int z=2;z<nums.size();z++){
            v.push_back(nums[z]+v[z-1]);
        }
        return v;
    }
};