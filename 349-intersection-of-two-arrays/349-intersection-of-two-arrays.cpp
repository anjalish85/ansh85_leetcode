class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(),nums2.end(),nums1[i])){
                ans.push_back(nums1[i]);
            }
        }
        set <int> s(ans.begin(),ans.end());
        vector<int> ans2(s.begin(),s.end());
        return ans2;
    }
};