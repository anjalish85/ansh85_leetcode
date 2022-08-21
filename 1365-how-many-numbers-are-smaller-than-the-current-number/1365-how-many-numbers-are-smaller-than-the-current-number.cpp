class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums2=nums;
        vector<int> ans;
        // using sorted array so that it will be easy to calculate number of elements lesser tthan it
        sort(nums2.begin(), nums2.end());
        
        for(int i=0; i<nums.size(); i++){
            //find will return the iterator to element
            //distance will return index
            //pushing the index value to return it
            ans.push_back(distance(nums2.begin(), find(nums2.begin(), nums2.end(), nums[i])));
        }
        
        return ans;
    }
};