class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v;
        vector <int> v0;
        vector <int> v1;
        
        for(auto a: nums1){
            if(find(nums2.begin(), nums2.end(), a)==nums2.end())
                if(find(v0.begin(), v0.end(), a)==v0.end())
                    v0.push_back(a);
        }
        
        for(auto a: nums2){
            if(find(nums1.begin(), nums1.end(), a)==nums1.end())
                if(find(v1.begin(), v1.end(), a)==v1.end())
                    v1.push_back(a);
        }
        v.push_back(v0);
        v.push_back(v1);
        return v;
    }
};