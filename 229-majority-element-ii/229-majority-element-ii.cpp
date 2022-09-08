class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        vector <int> ans;
        int k = nums.size()/3;
        
        for(auto a: nums){
            mp[a]++;
        }
        
        for(auto a: mp){
            if(a.second>k){
                ans.push_back(a.first);
            }
        }
        
        return ans;
            
    }
};