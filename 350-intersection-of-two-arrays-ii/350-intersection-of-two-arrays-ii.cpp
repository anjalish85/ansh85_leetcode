class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        // vector<int>::iterator pos;
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(),nums2.end(),nums1[i])){
                // auto pos=find(nums2.begin(),nums2.end(),nums1[i]);
                ans.push_back(nums1[i]);
                nums2.erase(find(nums2.begin(),nums2.end(),nums1[i]));
            }
        }
        return ans;
    }
};