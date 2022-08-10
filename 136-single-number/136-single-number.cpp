class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto a: mp){
            if(a.second == 1)
                return a.first;
        }
        
        return -1;
    }
};