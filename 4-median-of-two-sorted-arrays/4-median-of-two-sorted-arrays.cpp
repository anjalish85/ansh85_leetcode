class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.begin(),nums1.end());//,nums2.begin(),nums2.end());
        for(auto a: nums2){
            nums.push_back(a);
        }
        sort(nums.begin(),nums.end());
        // for(auto a: nums){
        //     cout<<a<<endl;
        // }
        if((nums.size()%2)==0){
            return (nums[(nums.size())/2]+nums[(nums.size()-2)/2])/2.0;
        }
        else{
            return nums[(nums.size())/2];
        }
        return 0.0;
    }
};