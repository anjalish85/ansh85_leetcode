class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set <int> s(nums.begin(),nums.end());
        if((nums.size()-s.size())>0){
            return true;
        }
        else{
            return false;
        }
    }
};