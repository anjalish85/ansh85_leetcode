class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        set <int> s(nums1.begin(),nums1.end());
        vector<int> ans2(s.begin(),s.end());
        nums1=ans2;
        nums1.shrink_to_fit();
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(),nums2.end(),nums1[i])){
                int ele=nums1[i];
                ans.push_back(nums1[i]);
                // while((find(nums1.begin(),nums1.end(),ele))==nums1.end()){
                //     nums1.erase(find(nums1.begin(),nums1.end(),ele));
                // }
            }
        }
        
        // set <int> s(ans.begin(),ans.end());
        // vector<int> ans2(s.begin(),s.end());
        return ans;
    }
};