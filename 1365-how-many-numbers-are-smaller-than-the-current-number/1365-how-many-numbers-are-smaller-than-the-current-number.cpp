class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums2=nums;
        vector<int> ans;
        sort(nums2.begin(), nums2.end());
        
        for(int i=0; i<nums.size(); i++){
            ans.push_back(distance(nums2.begin(), find(nums2.begin(), nums2.end(), nums[i])));
        }
        
        return ans;
    }
};