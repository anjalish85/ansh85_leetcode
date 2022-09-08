class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        int k=nums.size()/2;
        
        for(auto a: nums){
            mp[a]++;
        }
        
        for(auto a: mp){
            if(a.second>k)
                return a.first;
        }
        
        return -1;
    }
};